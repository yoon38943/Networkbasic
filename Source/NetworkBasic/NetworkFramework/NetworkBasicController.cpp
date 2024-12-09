#include "NetworkBasicController.h"
#include "../ETC/HDebugMacros.h"

void ANetworkBasicController::BeginPlay()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::BeginPlay();
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

void ANetworkBasicController::PostInitializeComponents()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::PostInitializeComponents();
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

void ANetworkBasicController::PostNetInit()
{
	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("Begin"));
	Super::PostNetInit();

	UNetDriver* NetDriver = GetNetDriver();
	if (NetDriver)
	{
		if (NetDriver->ServerConnection)
		{
			HLOG_NET_LOG(Log, TEXT("Server Connection: %s"), *NetDriver->ServerConnection->GetName());
		}
	}
	else
	{
		HLOG_NET_LOG(Log, TEXT("%s"), TEXT("No NetDriver"));
	}

	HLOG_NET_LOG(Log, TEXT("%s"), TEXT("End"));
}

void ANetworkBasicController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}
