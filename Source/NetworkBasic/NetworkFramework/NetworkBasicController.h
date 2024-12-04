#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NetworkBasicController.generated.h"

UCLASS()
class NETWORKBASIC_API ANetworkBasicController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
};
