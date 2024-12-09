// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NetworkBasicGameMode.generated.h"

UCLASS(minimalapi)
class ANetworkBasicGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANetworkBasicGameMode();

public:
	// �α��� ���� 3���� �ֿ� �Լ� + ���� ����
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void StartPlay() override;
};



