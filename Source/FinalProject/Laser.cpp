#include "Laser.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"

ALaser::ALaser() {
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> LaserMesh;
		ConstructorHelpers::FObjectFinderOptional<USoundBase> LaserSound;
		FConstructorStatics()
			: LaserMesh(TEXT("/Game/Geometry/Meshes/Laser.Laser")), //set up mesh
			LaserSound(TEXT("/Game/Collections/Laser.Laser"))		//set up firing sound

		{}
	};

	static FConstructorStatics ConstructorStatics;

	LaserMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserMesh0"));
	LaserMesh->SetStaticMesh(ConstructorStatics.LaserMesh.Get());
	LaserMesh->SetWorldScale3D(FVector(.5, .5, .5)); //scale lazer size
	RootComponent = LaserMesh;

	//add material to mesh
	UMaterial* tempMaterial = CreateDefaultSubobject<UMaterial>(TEXT("LaserMaterial0"));
	tempMaterial = ConstructorHelpers::FObjectFinderOptional<UMaterial>(TEXT("/Game/Geometry/Materials/LaserMaterial.LaserMaterial")).Get();
	this->LaserMesh->SetMaterial(int32(), tempMaterial);

	//play sounds on laser fire
	this->sound = CreateDefaultSubobject<UAudioComponent>(TEXT("laser0"));
	this->sound->SetSound(ConstructorStatics.LaserSound.Get());
	this->sound->Play();

	//set initial direction and velocity
	direction = FVector(1, 0, 0);
	launchSpeed = 1000;
	survivalTime = 5.0;
	timeElapsed = 0;

	//start ticking as soon as it spawns
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	//tag used to detsry asteroids
	Tags.Add("AsteroidDestructor");
}

void ALaser::Tick(float DeltaSeconds) {

	timeElapsed += DeltaSeconds;

	//despawn if over survival time
	if (timeElapsed > survivalTime)
		this->Destroy();

	const FVector LocalMove = direction * DeltaSeconds * launchSpeed;
	// Move plan forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);

	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void ALaser::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	//destroy laser whenever it hits anything but the player
	if (!Other->ActorHasTag("Player"))
		this->Destroy();
	else
		this->AddActorLocalOffset(FVector(10, 0, 0),false);
}