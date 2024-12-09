#include "CoinGameMode.h"
#include "CoinGameState.h"
#include "../Character/CoinGameCharacter.h"
#include "../ETC/HDebugMacros.h"
#include "Kismet/GameplayStatics.h"
//#include "Misc/ConfigCacheIni.h"


ACoinGameMode::ACoinGameMode()
{
	GConfig->GetInt(TEXT("Rule"), TEXT("PickupPoint"), PickupPoint, GGameIni);
	GConfig->GetInt(TEXT("Rule"), TEXT("FellOutPoint"), FellOutPoint, GGameIni);

	// FConfigFile 객체 생성
	//FConfigFile MyConfig; // 설정 파일 로드
	//FString ConfigPath = FPaths::Combine(FPaths::ProjectConfigDir(), TEXT("DefaultCoinGameRule.ini"));
	//if (FPaths::FileExists(ConfigPath))
	//{
	//	MyConfig.Read(ConfigPath); // 값 읽기
	//	MyConfig.GetInt(TEXT("Rule"), TEXT("PickupPoint"), PickupPoint);
	//	MyConfig.GetInt(TEXT("Rule"), TEXT("FellOutPoint"), FellOutPoint);
	//}
}

void ACoinGameMode::BeginPlay()
{
	Super::BeginPlay();

	MyGameState = GetGameState<ACoinGameState>();
}

// 이 함수를 오버라이드 해서 false를 반환 => 플레이어가 리스폰될 때 랜덤 플레이어 스타트를 사용
bool ACoinGameMode::ShouldSpawnAtStartSpot(AController* Player)
{
	return false;
}

// 게임이 시작되었을 때
void ACoinGameMode::HandleMatchHasStarted()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::HandleMatchHasStarted();

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "The game has started");
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

// 게임이 종료되었을 때
void ACoinGameMode::HandleMatchHasEnded()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::HandleMatchHasEnded();

	TArray<AActor*> Characters;
	UGameplayStatics::GetAllActorsOfClass(this, ACoinGameCharacter::StaticClass(), Characters);
	for (AActor* Char : Characters)
	{
		Char->Destroy();
	}

	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ACoinGameMode::RestartMap, 5.0f);

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "The game has ended!");
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

bool ACoinGameMode::ReadyToStartMatch_Implementation()
{
//	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Game StartMatch"));
	return true;
}

bool ACoinGameMode::ReadyToEndMatch_Implementation()
{
//	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Game EndMatch"));
	return MyGameState != nullptr && !MyGameState->HasPickups();
}

void ACoinGameMode::RestartMap() const
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Game Restart"));
	GetWorld()->ServerTravel(GetWorld()->GetName());
}