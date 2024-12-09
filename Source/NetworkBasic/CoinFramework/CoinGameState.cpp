#include "CoinGameState.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "../ETC/CoinItem.h"
#include "Net/UnrealNetwork.h"


void ACoinGameState::BeginPlay()
{
	Super::BeginPlay();

	// 레벨에 있는 모든 ACoinItem 객체를 가져와 담는다
	TArray<AActor*> CoinItemArr;
	UGameplayStatics::GetAllActorsOfClass(this, ACoinItem::StaticClass(), CoinItemArr);

	PickupsRemaining = CoinItemArr.Num();
}

TArray<APlayerState*> ACoinGameState::GetPlayerStatesOrderedByScore() const
{
	TArray<APlayerState*> PlayerStates(PlayerArray);
	PlayerStates.Sort( [] (const APlayerState& A, const APlayerState& B)
		{
			return A.GetScore() > B.GetScore();
		}
	);

	return PlayerStates;
}

void ACoinGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACoinGameState, PickupsRemaining);
}
