// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FinalProjectPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"
#include "Asteroid.h"

AFinalProjectPawn::AFinalProjectPawn()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh, Cannon;
		FConstructorStatics()
			: PlaneMesh(TEXT("/Game/Geometry/Meshes/Spaceship2.Spaceship2")), Cannon(TEXT("/Game/Geometry/Meshes/Turret1.Turret1"))
		{
		}
	};

	Tags.Add("Player");

	static FConstructorStatics ConstructorStatics;

	// Create static mesh component for ship
	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh0"));
	PlaneMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());	// Set static mesh
	PlaneMesh->SetWorldScale3D(FVector(.25, .25, .25));
	RootComponent = PlaneMesh;

	// Create static mesh component for cannon
	Cannon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon0"));
	Cannon->SetStaticMesh(ConstructorStatics.Cannon.Get());
	Cannon->SetRelativeLocation(FVector(-200., 0., 85.));
	Cannon->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));

	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(Cannon);	// Attach SpringArm to RootComponent
	SpringArm->TargetArmLength = 160.0f; // The camera follows at this distance behind the character	
	SpringArm->SocketOffset = FVector(-70.f, 0.f, 50.f);
	SpringArm->bEnableCameraLag = false;	// Do not allow camera to lag
	SpringArm->CameraLagSpeed = 15.f;

	// Create camera component
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);	// Attach the camera
	Camera->bUsePawnControlRotation = false; // Don't rotate camera with controller

	// Set handling parameters
	Acceleration = 500.f;
	TurnSpeed = 50.f;
	MaxSpeed = 4000.f;
	MinSpeed = 500.f;
	CurrentForwardSpeed = 500.f;
	LocalVelocity = FVector(0., 0., 0.);
	SlowDown = .5f;
}

void AFinalProjectPawn::Tick(float DeltaSeconds)
{
	//Make the ship roll towards up


	const FVector LocalMove = LocalVelocity * DeltaSeconds;

	// Move plan forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);

	// Calculate change in rotation this frame
	FRotator DeltaRotation(0, 0, 0);
	/*
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaSeconds;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaSeconds;
	DeltaRotation.Roll = CurrentRollSpeed * DeltaSeconds;
	*/
	DeltaRotation = Cannon->GetComponentRotation()-RootComponent->GetComponentRotation();

	DeltaRotation.Normalize();
	
	//updates yaw, pitch, and roll values
	DeltaRotation.Yaw = (abs(DeltaRotation.Yaw) <=  TurnSpeed * DeltaSeconds) ? DeltaRotation.Yaw : DeltaRotation.Yaw/abs(DeltaRotation.Yaw) * TurnSpeed * DeltaSeconds;
	DeltaRotation.Pitch = (abs(DeltaRotation.Pitch) <= TurnSpeed * DeltaSeconds) ? DeltaRotation.Pitch : DeltaRotation.Pitch / abs(DeltaRotation.Pitch) * TurnSpeed * DeltaSeconds;
	DeltaRotation.Roll = (abs(DeltaRotation.Roll) <= TurnSpeed * DeltaSeconds) ? DeltaRotation.Roll : DeltaRotation.Roll / abs(DeltaRotation.Roll) * TurnSpeed * DeltaSeconds;

	// Rotate plane
	AddActorLocalRotation(DeltaRotation);

	//Rotate the velocity accordingly
	LocalVelocity = DeltaRotation.UnrotateVector(LocalVelocity);
	LocalVelocity = LocalVelocity.GetClampedToMaxSize(MaxSpeed);
	Cannon->AddLocalRotation(-1*DeltaRotation);

	//1% to spawn asteroid per tick
	if (!(rand() % 100)) {
		AAsteroid* temp = GetWorld()->SpawnActor<AAsteroid>();
		temp->SetActorLocationAndRotation(FVector(rand() % (boundaryRadius * 2) - boundaryRadius, rand() % (boundaryRadius * 2) - boundaryRadius, rand() % (boundaryRadius * 2) - boundaryRadius), FRotator(rand() % 360, rand() % 360, rand() % 360).Quaternion(), false);
		if ((temp->GetActorLocation() - this->GetActorLocation()).Size() < 400)
			temp->Destroy();



	}
	LocalVelocity = checkAndDoBoundaryHit(this->GetActorLocation(), this->GetActorRotation().RotateVector(this->LocalVelocity));
	LocalVelocity = this->GetActorRotation().UnrotateVector(LocalVelocity);
	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void AFinalProjectPawn::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	//if the ship hits an asteroid, destroy the ship
	if (Other->ActorHasTag("Asteroid"))
		this->Destroy();
	//otherwise, bouce off object
	FVector CurrentVelocity = GetActorRotation().RotateVector(LocalVelocity);
	FVector NewVelocity = CurrentVelocity - 2 * (FVector::DotProduct(HitNormal, CurrentVelocity)) * HitNormal / HitNormal.Size();
	LocalVelocity = GetActorRotation().UnrotateVector(NewVelocity);

}

void AFinalProjectPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Check if PlayerInputComponent is valid (not NULL)
	check(PlayerInputComponent);

	// Bind our control axis' to callback functions
	PlayerInputComponent->BindAxis("Thrust", this, &AFinalProjectPawn::ThrustInput);
	PlayerInputComponent->BindAxis("MoveUp", this, &AFinalProjectPawn::MoveUpInput);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFinalProjectPawn::MoveRightInput);
	PlayerInputComponent->BindAxis("CannonUp", this, &AFinalProjectPawn::RotateCannonUp);
	PlayerInputComponent->BindAxis("CannonRight", this, &AFinalProjectPawn::RotateCannonRight);
	PlayerInputComponent->BindAxis("Fire", this, &AFinalProjectPawn::FireCannon);
}

void AFinalProjectPawn::ThrustInput(float Val)
{
	// Is there any input?
	bool bHasInput = !FMath::IsNearlyEqual(Val, 0.f);

	
	// Calculate acceleration
	float deltaV = (Val * Acceleration) * GetWorld()->GetDeltaSeconds();
	
	//slow ship over time
	FVector slowedVelocity = LocalVelocity - SlowDown * LocalVelocity / LocalVelocity.GetAbs()* GetWorld()->GetDeltaSeconds();
	
	//show ship if slowed velocity is in the same direction as local velocity
	if (Dot3(LocalVelocity, slowedVelocity) > 0)
		LocalVelocity = slowedVelocity;

	// Calculate new speed
	LocalVelocity = LocalVelocity + FVector(deltaV, 0., 0.);
}

void AFinalProjectPawn::MoveUpInput(float Val)
{
	// Target pitch speed is based in input
	float TargetPitchSpeed = (Val * TurnSpeed * -1.f);

	// When steering, we decrease pitch slightly
	TargetPitchSpeed += (FMath::Abs(CurrentYawSpeed) * -0.2f);

	// Smoothly interpolate to target pitch speed
	CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void AFinalProjectPawn::MoveRightInput(float Val)
{
	// Target yaw speed is based on input
	float TargetYawSpeed = (Val * TurnSpeed);

	// Smoothly interpolate to target yaw speed
	CurrentYawSpeed = TargetYawSpeed;

	// Is there any left/right input?
	const bool bIsTurning = FMath::Abs(Val) > 0.2f;

}

void AFinalProjectPawn::RotateCannonUp(float Val)
{
	Cannon->AddLocalRotation(FRotator(Val, 0, 0));
	Cannon->AddLocalRotation(FRotator(0, 0, -Cannon->GetComponentRotation().Roll));
}

void AFinalProjectPawn::RotateCannonRight(float Val)
{
	Cannon->AddLocalRotation(FRotator(0, Val, 0));
	Cannon->AddLocalRotation(FRotator(0, 0, -Cannon->GetComponentRotation().Roll));
}

void AFinalProjectPawn::FireCannon(float Val) {
	static bool isPressed = false;
	ALaser* shot;
	if (Val == 1.000000) { //if pressed
		if (!isPressed) { //and wasn't pressed before (one shot per click)
			shot = GetWorld()->SpawnActor<ALaser>(Cannon->GetComponentLocation() + Cannon->GetComponentRotation().RotateVector(FVector(700, 0, -75)),Cannon->GetComponentRotation());
			shot->SetActorScale3D(FVector(.5,.5,.5));
			shot->SetLaunchSpeed(10000);
			isPressed = true;
			shotsFired++;
		}
	}
	else
		isPressed = false;
}

int AFinalProjectPawn::boundaryRadius = 10000;

int AFinalProjectPawn::shotsFired = 0;