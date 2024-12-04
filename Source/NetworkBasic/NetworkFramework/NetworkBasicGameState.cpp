 // Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkBasicGameState.h"
#include "../ETC/HDebugMacros.h"

void ANetworkBasicGameState::HandleBeginPlay()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::HandleBeginPlay();
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

void ANetworkBasicGameState::OnRep_ReplicatedHasBegunPlay()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::OnRep_ReplicatedHasBegunPlay();
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}
