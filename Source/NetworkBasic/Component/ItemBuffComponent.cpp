#include "ItemBuffComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "NetworkBasic/Character/CoinGameCharacter.h"


UItemBuffComponent::UItemBuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UItemBuffComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UItemBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UItemBuffComponent::SpeedBuffProc(float BuffBaseSpeed, float BuffTime)
{
	if (CoinGameCharacter == nullptr)
	{
		return;
	}

	CoinGameCharacter->GetWorldTimerManager().SetTimer(SpeedBuffTimer, this, &ThisClass::ResetSpeed, BuffTime);
	if (CoinGameCharacter->GetCharacterMovement())
	{
		CoinGameCharacter->GetCharacterMovement()->MaxWalkSpeed = BuffBaseSpeed;
	}
	// 모든 클라에게 나 아이템 먹었다 => 알려준다
	MulticastSpeedBuff(BuffBaseSpeed);
}

// 서버가 호출한 멀티캐스트를 클라가 실행
void UItemBuffComponent::MulticastSpeedBuff_Implementation(float BaseSpeed)
{
	if (CoinGameCharacter && CoinGameCharacter->GetCharacterMovement())
	{
		CoinGameCharacter->GetCharacterMovement()->MaxWalkSpeed = BaseSpeed;
	}
}

void UItemBuffComponent::ResetSpeed()
{
	if (CoinGameCharacter == nullptr || CoinGameCharacter->GetCharacterMovement() == nullptr)
	{
		return;
	}

	// 원래대로 속도를 돌려놓는다
	CoinGameCharacter->GetCharacterMovement()->MaxWalkSpeed = InitialBaseSpeed;
	// 모든 클라에게 나 이제 아이템 시간 끝났다 => 알려준다
	MulticastSpeedBuff(InitialBaseSpeed);
}
