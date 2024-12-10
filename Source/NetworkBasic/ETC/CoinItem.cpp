#include "CoinItem.h"
#include "../Character/CoinGameCharacter.h"
#include "../CoinFramework/CoinGameState.h"
#include "../CoinFramework/CoinGameMode.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "NetworkBasic/Component/ItemBuffComponent.h"

ACoinItem::ACoinItem()
{
	PrimaryActorTick.bCanEverTick = false;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(StaticMesh);
	StaticMesh->SetCollisionProfileName("OverlapAll");

	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>("Rotating Movement");
	RotatingMovement->RotationRate = FRotator(0, 90.0f, 0);

	bReplicates = true;
}

void ACoinItem::BeginPlay()
{
	Super::BeginPlay();

	StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ACoinItem::OnBeginOverlap);
}

void ACoinItem::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	// 권한이 없으면 로직처리를 스킵한다.(  이하 서버에서 실행, 이동 동기화로 인해 서버에서 다른 클라가 픽업하는것도 처리 )
	if (!HasAuthority())
	{
		return;
	}

	ACoinGameCharacter* Character = Cast<ACoinGameCharacter>(OtherActor);
	if (Character == nullptr)
	{
		return;
	}
	ACoinGameMode* GameMode = Cast<ACoinGameMode>(GetWorld()->GetAuthGameMode<AGameMode>());
	if (GameMode == nullptr)
	{
		return;
	}
	ACoinGameState* GameState = Cast<ACoinGameState>(GetWorld()->GetGameState());
	if (GameState != nullptr)
	{
		GameState->RemovePickup();
	}

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "ClientPlaySound2D Begin");
	Character->ClientPlaySound2D(PickupSound); // 클라는 호출 안함
	Character->AddScore(GameMode->PickupPoint);
	Character->AddPickup();


	if (ItemTypeSpeed == true)
	{
		UItemBuffComponent* ItemBuff = Character->GetItemBuff();
		if (ItemBuff)
		{
			ItemBuff->SpeedBuffProc(BaseSpeedBuff, SpeedBuffTime);
		}
	}
	
	Destroy();
}