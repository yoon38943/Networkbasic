#include "OwnershipTestActor.h"
#include "HDebugMacros.h"
#include "Kismet/GameplayStatics.h"
#include "../Character/NetworkBasicCharacter.h"

AOwnershipTestActor::AOwnershipTestActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	bReplicates = true;
}

void AOwnershipTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AOwnershipTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugSphere(GetWorld(), GetActorLocation(), OwnershipRadius, 32, FColor::Yellow);

	// 내가 권한이 있으면
	if (HasAuthority())
	{
		AActor* NextOwner = nullptr;
		float MinDistance = OwnershipRadius;

		TArray<AActor*> Actors;
		UGameplayStatics::GetAllActorsOfClass(this, ANetworkBasicCharacter::StaticClass(), Actors);
		for (AActor* Actor : Actors)
		{
			const float Distance = GetDistanceTo(Actor);
			if (Distance <= MinDistance)
			{
				MinDistance = Distance;
				NextOwner = Actor;
			}
		}

		if (GetOwner() != NextOwner)
		{
			SetOwner(NextOwner);
		}
	}
	
	const FString OwnerString = GetOwner() != nullptr ? GetOwner()->GetName() : TEXT("No Owner");
	const FString ConnectionString = GetNetConnection() != nullptr ? TEXT("Valid Connection") : TEXT("Invalid Connection");

	const FString Values = FString::Printf(TEXT("Owner = %s\nConnection = %s"), *OwnerString, *ConnectionString);
	DrawDebugString(GetWorld(), GetActorLocation(), Values, nullptr, FColor::White, 0.0f, true);
}

