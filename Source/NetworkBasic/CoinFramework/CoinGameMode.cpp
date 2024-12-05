#include "CoinGameMode.h"
#include "../ETC/HDebugMacros.h"
#include "CoinGameState.h"

void ACoinGameMode::BeginPlay()
{
	Super::BeginPlay();

	MyGameState = GetGameState<ACoinGameState>();
}

// 게임이 시작되었을 때
void ACoinGameMode::HandleMatchHasStarted()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"))
	Super::HandleMatchHasStarted();

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "The Game has started");
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

void ACoinGameMode::HandleMatchHasEnded()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::HandleMatchHasEnded();
	
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "The Game has ended");
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}
