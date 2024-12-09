#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CoinGameMode.generated.h"


UCLASS(config = Game)
class NETWORKBASIC_API ACoinGameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	ACoinGameMode();

	UPROPERTY()
	class ACoinGameState* MyGameState;

public:
	UPROPERTY(Config)
	int32 PickupPoint;
	UPROPERTY(Config)
	int32 FellOutPoint;
	
protected:
	virtual void BeginPlay() override;
	virtual bool ShouldSpawnAtStartSpot(AController* Player) override;
	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
	virtual bool ReadyToStartMatch_Implementation() override;
	virtual bool ReadyToEndMatch_Implementation() override;

	void RestartMap() const;
};