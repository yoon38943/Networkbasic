// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkBasicGameMode.h"
#include "../Character/NetworkBasicCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "../ETC/HDebugMacros.h"

ANetworkBasicGameMode::ANetworkBasicGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ANetworkBasicGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin ==== Client Login ====="));
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

APlayerController* ANetworkBasicGameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	APlayerController *NewPlayerController = Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
	return NewPlayerController;
}

void ANetworkBasicGameMode::PostLogin(APlayerController* NewPlayer)
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::PostLogin(NewPlayer);
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

void ANetworkBasicGameMode::StartPlay()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::StartPlay();
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}
