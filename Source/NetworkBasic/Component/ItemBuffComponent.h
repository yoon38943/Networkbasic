#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemBuffComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NETWORKBASIC_API UItemBuffComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY()
	class ACoinGameCharacter* CoinGameCharacter;

	FTimerHandle SpeedBuffTimer;
	float InitialBaseSpeed;	// 캐릭터 기본 속도
	void ResetSpeed();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpeedBuff(float BaseSpeed);
	
public:
	friend class ACoinGameCharacter;
	void SetInitialSpeed(float BaseSpeed)
	{
		InitialBaseSpeed = BaseSpeed;
	}

	void SpeedBuffProc(float BuffBaseSpeed, float BuffTime);
	
	UItemBuffComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
};
