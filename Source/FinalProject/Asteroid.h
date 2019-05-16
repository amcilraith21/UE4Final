// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Asteroid.generated.h"

UCLASS()
class FINALPROJECT_API AAsteroid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroid();

	//asteroid mesh
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* AsteroidMesh;

	//explotion particle
	UPROPERTY(Category = Particle, VisibleDefaultsOnly, BlueprintReadOnly)
		class UParticleSystemComponent* ExplosionParticle;

	//explosion audio
	UPROPERTY(Category = Particle, VisibleDefaultsOnly, BlueprintReadOnly)
		class UAudioComponent* sound;
	static int asteroidScore; //Holds the game score
protected:
	//rebounds off of invisible sphere to keep asteroids from flying off indefinitely
	FVector checkAndDoBoundaryHit(FVector worldLocation, FVector velocity) {
		if (abs(worldLocation.Size()) < AsteroidBoundary)
			return velocity;
		velocity = velocity - 2 * (FVector::DotProduct(worldLocation, velocity)) * worldLocation / worldLocation.Size(); //Bounce off the boundary

		return velocity;

	}
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	

	//holds the size of the asteroid
	//smallest value is 1
	UPROPERTY(category = Size, EditAnywhere)
		int sizeCategory;

	//current velocity of the asteroid
	UPROPERTY(category = Scale, EditAnywhere)
		float speedModifier;

	//minimum velocity of the asteroid
	UPROPERTY(category = Scale, EditAnywhere)
		float minVelocity;

	//radius of invisible sphere that asteroids will be constrained in
	static float AsteroidBoundary;

	//activated both explode particle effect and sound effect as well as spawning new asteroids of a smaller size
	void explode();

	

	FVector velocity;

	//true if asteroid is not clipping another asteroid
	bool isFree = false;

	//sets the size of the asteroid
	void setSizeCategory(int newSize) { sizeCategory = newSize;  SetActorScale3D(1. * pow(2, sizeCategory) *FVector(1,1,1));}

	//randomises the velocity on asteroid spawn
	void randomVelocity();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//called when the asteroid hits anything
	virtual void NotifyHit( UPrimitiveComponent*, AActor*, UPrimitiveComponent*, bool, FVector, FVector, FVector, const FHitResult&) override;
};
