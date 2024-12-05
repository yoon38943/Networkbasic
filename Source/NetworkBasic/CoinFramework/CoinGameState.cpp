#include "CoinGameState.h"
#include "Kismet/GameplayStatics.h"
#include "NetworkBasic/ETC/CoinItem.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerState.h"


void ACoinGameState::BeginPlay()
{
	Super::BeginPlay();

	// 레벨에 있는 모든 ACoinItem 객체를 가져와 담는다
	TArray<AActor*> CoinItemArr;
	UGameplayStatics::GetAllActorsOfClass(this,ACoinItem::StaticClass(), CoinItemArr);

	PickupsRemaining = CoinItemArr.Num();
}

TArray<APlayerState*> ACoinGameState::GetPlayerStatesOrdered() const
{
	TArray<APlayerState*> PlayerStates(PlayerArray);
	PlayerStates.Sort( [] (const APlayerState& A, const APlayerState& B)
	{
		return A.GetScore() < B.GetScore();
	});
	
	return PlayerStates;
}

void ACoinGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 추가 복제 조건없이 다음 매크로를 사용해 리플리케이션
	DOREPLIFETIME(ACoinGameState, PickupsRemaining);
}
