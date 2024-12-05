#include "CoinPlayerState.h"
#include "Net/UnrealNetwork.h"

// Replicated를 사용하기 위해 써야함
void ACoinPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 추가 복제 조건없이 다음 매크로를 사용해 리플리케이션
	DOREPLIFETIME(ACoinPlayerState, Pickups);
}