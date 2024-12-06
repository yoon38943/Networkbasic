#include "CoinGameMode.h"
#include "../ETC/HDebugMacros.h"
#include "CoinGameState.h"
#include "Kismet/GameplayStatics.h"
#include "NetworkBasic/Character/CoinGameCharacter.h"

void ACoinGameMode::BeginPlay()
{
	Super::BeginPlay();

	MyGameState = GetGameState<ACoinGameState>();
}

// 이 함수를 오버라이드 해서 false를 반환 => 플레이어가 리스폰 될 때 랜덤 플레이어 스타트 위치를 사용
bool ACoinGameMode::ShouldSpawnAtStartSpot(AController* Player)
{
	return false;
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

	TArray<AActor*> Characters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACoinGameCharacter::StaticClass(), Characters);
	for (AActor* Char : Characters)
	{
		Char->Destroy();
	}

	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ACoinGameMode::RestartMap, 5.f);
	
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "The Game has ended");
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

bool ACoinGameMode::ReadyToStartMatch_Implementation()
{
	//return Super::ReadyToStartMatch_Implementation();
	//HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Game StartMatch"));
	return true;
}

bool ACoinGameMode::ReadyToEndMatch_Implementation()
{
	//return Super::ReadyToEndMatch_Implementation();
	//HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Game EndMatch"));
	return MyGameState != nullptr && !MyGameState->HasPickups();
}

void ACoinGameMode::RestartMap() const
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Game Restart"));
	GetWorld()->ServerTravel(GetWorld()->GetName());
}
