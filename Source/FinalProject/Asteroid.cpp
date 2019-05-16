// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroid.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Classes/Components/AudioComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"
#include "Engine/Classes/Kismet/GameplayStatics.h"
#include "ParticleHelper.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values

AAsteroid::AAsteroid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initial size 
	sizeCategory = 3;

	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> AsteroidMesh;
		ConstructorHelpers::FObjectFinderOptional<UParticleSystem> ExplosionParticles;
		ConstructorHelpers::FObjectFinderOptional<USoundBase> ExplosionSound;
		FConstructorStatics()
			: AsteroidMesh(TEXT("/Game/Geometry/Meshes/Asteroid1.Asteroid1")), 
			ExplosionParticles(TEXT("/Game/FXVarietyPack/Particles/P_ky_explosion.P_ky_explosion")),
			ExplosionSound(TEXT("/Game/Collections/boom.boom"))
		{}
	};
	static FConstructorStatics ConstructorStatics;

	// Create static mesh component
	AsteroidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh0"));
	AsteroidMesh->SetStaticMesh(ConstructorStatics.AsteroidMesh.Get());	// Set static mesh

	setSizeCategory(sizeCategory);
	RootComponent = AsteroidMesh;

	Tags.Add("Asteroid");

	//set up particle effect
	this->ExplosionParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("bang0"));
	this->ExplosionParticle->SetTemplate(ConstructorStatics.ExplosionParticles.Get());
	this->ExplosionParticle->SetWorldLocation(AsteroidMesh->GetComponentLocation());
	this->ExplosionParticle->Deactivate();

	//set up sounds effects
	this->sound = CreateDefaultSubobject<UAudioComponent>(TEXT("boom0"));
	this->sound->SetSound(ConstructorStatics.ExplosionSound.Get());
	this->sound->Deactivate();

	//starting values
	minVelocity = 10;
	speedModifier = 10000;

	//start ticking immediatly 
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	
	//randomize velocity and set size
	randomVelocity();
	setSizeCategory(sizeCategory);
}

// Called when the game starts or when spawned
void AAsteroid::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAsteroid::Tick(float DeltaTime)
{
	//this->ExplosionParticle->SetRelativeLocation(FVector(0, 0, 0));
	AddActorWorldOffset(DeltaTime * velocity, true);

	//ensure that the sounds and particle effects are disabled 
	ExplosionParticle->Deactivate();
	sound->Stop();

	//update velocity if collision occures
	//velocity = checkAndDoBoundaryHit(-1*this->GetActorLocation(), velocity);

	Super::Tick(DeltaTime);

}


void AAsteroid::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) {
	//cause an explosion if laser hits 
	if (Other->ActorHasTag("AsteroidDestructor"))
		explode();

	//If it is an asteroid and is not free of collisions, move forward fast
	else if (Other->ActorHasTag("Asteroid")) {
		if (!isFree)
			this->AddActorWorldOffset(velocity * .1, false);
		else
			velocity = velocity - 2 * (FVector::DotProduct(HitNormal, velocity)) * HitNormal / HitNormal.Size();
	}
	//Othewise bounce
	else {
		velocity = velocity - 2 * (FVector::DotProduct(HitNormal, velocity)) * HitNormal / HitNormal.Size();
	}
}

void AAsteroid::explode() {
	//First play the explosion sound
	UGameplayStatics::PlaySoundAtLocation(GetWorld(),sound->Sound, this->GetActorLocation());

	//Then make the particle explode
	this->ExplosionParticle->AddLocalOffset(-1 * this->ExplosionParticle->RelativeLocation);
	this->ExplosionParticle->ResetParticles(true);
	this->ExplosionParticle->Activate(true);

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticle->Template, FTransform(this->GetActorRotation(), this->GetActorLocation(), this->GetActorScale3D()));
	
	//Spawn 4 asteroids of a smaller size
	if (sizeCategory > 1) {
		for (int i = 0; i < 4; i++) {
			AAsteroid* temp = GetWorld()->SpawnActor<AAsteroid>(this->GetActorLocation(), this->GetActorRotation() + FRotator(rand() % 360, rand() % 360, rand() % 360));
			temp->setSizeCategory(sizeCategory - 1);
			temp->randomVelocity();
		}
	}
	//Destory itself
	this->Destroy();

	//Up the score
	AAsteroid::asteroidScore++;
	
}

void AAsteroid::randomVelocity() {
	int maxVelocity = speedModifier/sizeCategory; //Calculate the maximum velocity based on values

	//Then set the velocity to be some fraction of that
	velocity = FVector(rand()%101-50, rand()%101-50, rand()%101-50);
	velocity.Normalize();
	velocity = (rand() % int(maxVelocity-minVelocity)+1 + minVelocity) * velocity;
}

float AAsteroid::AsteroidBoundary = 10000;

int AAsteroid::asteroidScore = 0;