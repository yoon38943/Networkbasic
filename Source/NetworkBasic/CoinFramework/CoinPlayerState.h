#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CoinPlayerState.generated.h"

UCLASS()
class NETWORKBASIC_API ACoinPlayerState : public APlayerState
{
	GENERATED_BODY()

protected:
	UPROPERTY(Replicated, BlueprintReadOnly)
	int32 Pickups;

public:
	int32 GetPickups() { return Pickups; }

	void AddPickup()
	{
		Pickups++;
	}
};
