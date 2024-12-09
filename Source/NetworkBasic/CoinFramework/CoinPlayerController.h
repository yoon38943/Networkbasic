#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CoinPlayerController.generated.h"


UCLASS()
class NETWORKBASIC_API ACoinPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class UUserWidget> ScoreboardMenuClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ScoreInfoClass;

	UPROPERTY()
	UUserWidget* ScoreboardMenu;
	
protected:
	virtual void BeginPlay() override;
};