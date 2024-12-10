#include "CoinGameCharacter.h"

#include "IDetailTreeNode.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "../CoinFramework/CoinGameMode.h"
#include "../CoinFramework/CoinPlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "../ETC/HDebugMacros.h"
#include "NetworkBasic/Component/ItemBuffComponent.h"

ACoinGameCharacter::ACoinGameCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.25f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// 아이템 버프 컴포넌트 생성 ( Replicated 설정! )
	ItemBuff = CreateDefaultSubobject<UItemBuffComponent>("Item Buff");
	ItemBuff->SetIsReplicated(true);
}

void ACoinGameCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (ItemBuff)
	{
		ItemBuff->CoinGameCharacter = this;
		ItemBuff->SetInitialSpeed(GetCharacterMovement()->MaxWalkSpeed);
	}
}

void ACoinGameCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ACoinGameCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (EndPlayReason == EEndPlayReason::Destroyed)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), FallSound);
	}
}

void ACoinGameCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	UGameplayStatics::PlaySound2D(GetWorld(), LandSound);
}

void ACoinGameCharacter::FellOutOfWorld(const UDamageType& DmgType)
{
	AController* BackupController = Controller;

	ACoinGameMode* GameMode = Cast<ACoinGameMode>(GetWorld()->GetAuthGameMode<AGameMode>());
	if (GameMode == nullptr)
	{
		return;
	}
	AddScore(GameMode->FellOutPoint);
	Destroy();

	GameMode->RestartPlayer(BackupController);
}

// 기존 점수에 Score를 + 시키는 함수
void ACoinGameCharacter::AddScore(const float Score) const
{
	APlayerState* MyPlayerState = GetPlayerState();
	if (MyPlayerState != nullptr)
	{
		const float CurrentScore = MyPlayerState->GetScore();
		MyPlayerState->SetScore(CurrentScore + Score);
	}
}

// 플레이어 스테이트의 리플리케이션 호출
void ACoinGameCharacter::AddPickup() const
{
	ACoinPlayerState* MyPlayerState = GetPlayerState<ACoinPlayerState>();
	if (MyPlayerState != nullptr)
	{
		MyPlayerState->AddPickup();
	}
}

// RPC 함수 호출
void ACoinGameCharacter::ClientPlaySound2D_Implementation(USoundBase* Sound)
{
	HLOG_NET_LOG(Warning, TEXT("%s"), TEXT("!!Sound Play!!"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "ClientPlaySound2D PlaySound");
	UGameplayStatics::PlaySound2D(GetWorld(), Sound);
}