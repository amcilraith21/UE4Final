#pragma once

#include "Engine.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Laser.generated.h"

UCLASS(config = game)
class ALaser :public AActor {
	GENERATED_BODY()

	

public:
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* LaserMesh;

	UPROPERTY(Category = Particle, VisibleDefaultsOnly, BlueprintReadOnly)
		class UAudioComponent* sound;

	ALaser();
	void SetLaunchSpeed(float input) { launchSpeed = input; };
	// Begin AActor overrides
	virtual void Tick(float DeltaSeconds) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	// End AActor overrides

private:
	/** Forward speed */
	UPROPERTY(Category = Laser, EditAnywhere)
		float launchSpeed;

	//how long the laser lasts before it despawns
	UPROPERTY(Category = Laser, EditAnywhere)
		float survivalTime;

	FVector direction;

	//time elsaped since fireing
	float timeElapsed;
public:
	/** Returns LaserMesh subobject **/
	FORCEINLINE class UStaticMeshComponent* GetLaserMesh() const { return LaserMesh; }
};