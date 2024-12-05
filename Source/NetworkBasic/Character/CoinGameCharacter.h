// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HCharBase.h"
#include "CoinGameCharacter.generated.h"

UCLASS()
class NETWORKBASIC_API ACoinGameCharacter : public AHCharBase
{
	GENERATED_BODY()

public:
	ACoinGameCharacter();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pickups Character")
	USoundBase* FallSound;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pickups Character")
	USoundBase* LandSound;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Landed(const FHitResult& Hit) override;

public:
	void AddScore(const float Score) const;
	void AddPickup() const;
};
