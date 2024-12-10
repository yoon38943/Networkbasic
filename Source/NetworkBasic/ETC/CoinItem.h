#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinItem.generated.h"

UCLASS()
class NETWORKBASIC_API ACoinItem : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	class URotatingMovementComponent* RotatingMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	class USoundBase* PickupSound;

// 아이템 속성
private:
	UPROPERTY(EditAnywhere)
	bool ItemTypeSpeed = false;
	UPROPERTY(EditAnywhere)
	float BaseSpeedBuff = 1000.f;
	UPROPERTY(EditAnywhere)
	float SpeedBuffTime = 20.f;
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);

public:	
	ACoinItem();	
};
