#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetScoreBoard.generated.h"


UCLASS()
class NETWORKBASIC_API UWidgetScoreBoard : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:
	TObjectPtr<class ACoinGameState> CoinGameState;
	FTimerHandle TimerHandle;
	UFUNCTION()
	void UpdateScoreBoard();

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UTextBlock> T_PickupRemaining;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UVerticalBox> V_PlayerCoinBoard;
};