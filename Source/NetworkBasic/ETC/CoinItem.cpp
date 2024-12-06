#include "CoinItem.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "NetworkBasic/Character/CoinGameCharacter.h"
#include "NetworkBasic/CoinFramework/CoinGameState.h"
#include "Sound/SoundBase.h"


ACoinItem::ACoinItem()
{
	PrimaryActorTick.bCanEverTick = false;	// Tick을 안 씀을 의미

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(StaticMesh);
	StaticMesh->SetCollisionProfileName("OverlapAll");

	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>("RotatingMovement");
	RotatingMovement->RotationRate = FRotator(0.0f, 90.0f, 0.0f);

	bReplicates = true;
}

void ACoinItem::BeginPlay()
{
	Super::BeginPlay();

	StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ACoinItem::OnBeginOverlap);
}

void ACoinItem::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	ACoinGameCharacter* Character = Cast<ACoinGameCharacter>(OtherActor);
	if (Character == nullptr || !HasAuthority())
	{
		return;
	}

	ACoinGameState* GameState = Cast<ACoinGameState>(GetWorld()->GetGameState());
	if (GameState != nullptr)
	{
		GameState->RemovePickup();
	}

	Character->ClientPlaySound2D(PickupSound);
	Character->AddScore(10);
	Character->AddPickup();

	Destroy();
}

