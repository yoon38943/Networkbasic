#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "CoinGameState.generated.h"


UCLASS()
class NETWORKBASIC_API ACoinGameState : public AGameState
{
	GENERATED_BODY()

protected:
	// 레벨에 남아있는 전체 코인수
	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 PickupsRemaining;

public:
	int32 GetPickupsRemaining() { return PickupsRemaining; }

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	TArray<APlayerState*> GetPlayerStatesOrderedByScore() const;

public:
	void RemovePickup() { PickupsRemaining--; }
	bool HasPickups() const { return PickupsRemaining > 0; }
};