#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CoinPlayerController.generated.h"

UCLASS()
class NETWORKBASIC_API ACoinPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class UUserWidget> ScoreboardMenuClass;

	UPROPERTY()
	class UUserWidget* ScoreboardMenu;

protected:
	virtual void BeginPlay() override;
};
