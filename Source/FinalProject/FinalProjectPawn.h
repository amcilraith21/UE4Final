// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Laser.h"
#include "FinalProjectPawn.generated.h"

UCLASS(Config = Game)
class AFinalProjectPawn : public APawn
{
	GENERATED_BODY()

		/** StaticMesh component that will be the visuals for our flying pawn */
		UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PlaneMesh;

	/** Cannon Which will fire lasers and is controlled by the mouse */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Cannon;

	/** Spring arm that will offset the camera */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	/** Camera component that will be our viewpoint */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UParticleSystemComponent* Thrusters;
public:
	AFinalProjectPawn();

	// Begin AActor overrides
	virtual void Tick(float DeltaSeconds) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	// End AActor overrides

	static int shotsFired;
protected:
	//check if collision occures with world boundry or obsticles (not asteroids)
	FVector checkAndDoBoundaryHit(FVector worldLocation, FVector velocity) {
		if (worldLocation.Size() < boundaryRadius)
			return velocity;

		velocity = velocity - 2 * (FVector::DotProduct(worldLocation, velocity)) * worldLocation / worldLocation.Size();

		return velocity;

	}
	// Begin APawn overrides
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override; // Allows binding actions/axes to functions
	// End APawn overrides

	/** Bound to the thrust axis */
	void ThrustInput(float Val);

	/** Bound to the vertical axis */
	void MoveUpInput(float Val);

	/** Bound to the horizontal axis */
	void MoveRightInput(float Val);

	void RotateCannonUp(float Val);

	void RotateCannonRight(float Val);

	void FireCannon(float Val);

private:

	/** How quickly forward speed changes */
	UPROPERTY(Category = Plane, EditAnywhere)
		float Acceleration;

	/** How quickly pawn can steer */
	UPROPERTY(Category = Plane, EditAnywhere)
		float TurnSpeed;

	/** Max forward speed */
	UPROPERTY(Category = Pitch, EditAnywhere)
		float MaxSpeed;

	/** Min forward speed */
	UPROPERTY(Category = Yaw, EditAnywhere)
		float MinSpeed;

	UPROPERTY(Category = Plane, EditAnywhere)
		float SlowDown;

		static int boundaryRadius;
	
	//Velocity relative to the object
	FVector LocalVelocity;

	/** Current forward speed */
	float CurrentForwardSpeed;

	/** Current yaw speed */
	float CurrentYawSpeed;

	/** Current pitch speed */
	float CurrentPitchSpeed;

	/** Current roll speed */
	float CurrentRollSpeed;

public:
	/** Returns PlaneMesh subobject **/
	FORCEINLINE class UStaticMeshComponent* GetPlaneMesh() const { return PlaneMesh; }
	/** Returns Cannon subobject **/
	FORCEINLINE class UStaticMeshComponent* GetCannon() const { return Cannon; }
	/** Returns SpringArm subobject **/
	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return SpringArm; }
	/** Returns Camera subobject **/
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera; }
};

