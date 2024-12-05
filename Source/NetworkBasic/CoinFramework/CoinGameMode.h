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
	
	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
};
