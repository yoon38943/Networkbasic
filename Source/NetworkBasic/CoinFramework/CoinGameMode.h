#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CoinGameMode.generated.h"

UCLASS()
class NETWORKBASIC_API ACoinGameMode : public AGameMode
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY()
	class ACoinGameState* MyGameState;

	virtual bool ShouldSpawnAtStartSpot(AController* Player) override;
	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
	virtual bool ReadyToStartMatch_Implementation() override;
	virtual bool ReadyToEndMatch_Implementation() override;

	void RestartMap() const;
};
