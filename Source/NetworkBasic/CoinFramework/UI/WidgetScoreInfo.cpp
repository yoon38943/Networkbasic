#include "WidgetScoreInfo.h"
#include "../CoinPlayerState.h"
#include "Components/TextBlock.h"


void UWidgetScoreInfo::NativeConstruct()
{
}

void UWidgetScoreInfo::SetTextBlock(FSlateColor& SColor, ACoinPlayerState* CoinPlayerState)
{
	if (T_PlayerName)
	{
		T_PlayerName->SetColorAndOpacity(SColor);
		if (CoinPlayerState)
		{
			FString str = FString::Printf(TEXT("%s"), *(CoinPlayerState->GetPlayerName()));
			T_PlayerName->SetText(FText::FromString(str));
		}
	}
	if (T_Score)
	{
		T_Score->SetColorAndOpacity(SColor);
		if (CoinPlayerState)
		{
			FString str = FString::Printf(TEXT("%d"), (int32)CoinPlayerState->GetScore());
			T_Score->SetText(FText::FromString(str));
		}
	}
	if (T_Coin)
	{
		T_Coin->SetColorAndOpacity(SColor);
		if (CoinPlayerState)
		{
			FString str = FString::Printf(TEXT("%d"), CoinPlayerState->GetPickups());
			T_Coin->SetText(FText::FromString(str));
		}
	}
}