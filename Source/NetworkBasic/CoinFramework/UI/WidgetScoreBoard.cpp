#include "WidgetScoreBoard.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "../CoinGameState.h"
#include "WidgetScoreInfo.h"
#include "../CoinPlayerState.h"
#include "../CoinPlayerController.h"
#include "Kismet/GameplayStatics.h"

void UWidgetScoreBoard::NativeConstruct()
{
	ACoinGameState* GameState = Cast<ACoinGameState>(GetWorld()->GetGameState());
	if (GameState != nullptr)
	{
		CoinGameState = GameState;
	}
	UpdateScoreBoard();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::UpdateScoreBoard, 0.5f, true);
}

void UWidgetScoreBoard::NativeDestruct()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
}

void UWidgetScoreBoard::UpdateScoreBoard()
{
	if (CoinGameState == nullptr)
	{
		return;
	}

	ACoinPlayerController* Controller = Cast<ACoinPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (Controller == nullptr)
	{
		return;
	}
	
	// 남은 코인 카운트
	FString str = FString::Printf(TEXT("[%d] Pickups Remaining"), CoinGameState->GetPickupsRemaining());
	T_PickupRemaining->SetText(FText::FromString(str));

	V_PlayerCoinBoard->ClearChildren();

	UWidgetScoreInfo *Header = CreateWidget<UWidgetScoreInfo>(this, Controller->ScoreInfoClass);
	if (Header)
	{
		FSlateColor SC(FColor::Green);
		Header->SetTextBlock(SC);
		V_PlayerCoinBoard->AddChildToVerticalBox(Header);
	}

	TArray<APlayerState*> PlayerStates = CoinGameState->GetPlayerStatesOrderedByScore();
	for (APlayerState* State : PlayerStates)
	{
		ACoinPlayerState* CoinPlayerState = Cast<ACoinPlayerState>(State);
		if (CoinPlayerState)
		{
			UWidgetScoreInfo* Entry = CreateWidget<UWidgetScoreInfo>(this, Controller->ScoreInfoClass);
			if (Entry)
			{
				if (CoinPlayerState->GetPawn() == Entry->GetOwningPlayerPawn())
				{
					FSlateColor SC(FColor::Blue);
					Entry->SetTextBlock(SC, CoinPlayerState);
				}
				else
				{
					FSlateColor SC(FColor::White);
					Entry->SetTextBlock(SC, CoinPlayerState);
				}

				V_PlayerCoinBoard->AddChildToVerticalBox(Entry);
			}
		}
	}
}