// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OwnershipTestActor.generated.h"

UCLASS()
class NETWORKBASIC_API AOwnershipTestActor : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float OwnershipRadius = 400.f;

public:	
	AOwnershipTestActor();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

};
