#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetScoreInfo.generated.h"


UCLASS()
class NETWORKBASIC_API UWidgetScoreInfo : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	TObjectPtr<class UTextBlock> T_PlayerName;
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	TObjectPtr<class UTextBlock> T_Score;
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	TObjectPtr<class UTextBlock> T_Coin;

public:
	void SetTextBlock(FSlateColor& SColor, class ACoinPlayerState* CoinPlayerState = nullptr);
};