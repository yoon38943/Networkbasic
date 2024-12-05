#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "CoinGameState.generated.h"

UCLASS()
class NETWORKBASIC_API ACoinGameState : public AGameState
{
	GENERATED_BODY()
	
protected:
	// 레벨에 남아있는 전체 코인 수
	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 PickupsRemaining;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	TArray<APlayerState*> GetPlayerStatesOrdered() const;

public:
	void RemovePickup() { PickupsRemaining--; }
	bool HasPickups() const { return (PickupsRemaining > 0); }
};
