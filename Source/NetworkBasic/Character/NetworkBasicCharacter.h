#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"
#include "HCharBase.h"
#include "NetworkBasicCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;


UCLASS(config=Game)
class ANetworkBasicCharacter : public AHCharBase
{
	GENERATED_BODY()

	
public:
	ANetworkBasicCharacter();
	virtual void Tick(float DeltaTime) override;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	UFUNCTION(BlueprintCallable)
	void OpenLevel();
	UFUNCTION(BlueprintCallable)
	void CallOpenLevel(const FString& Address);
	UFUNCTION(BlueprintCallable)
	void CallClientTravel(const FString& Address);
	
	protected:
	UPROPERTY(Replicated)
	float R_Health = 100.f;

	UPROPERTY(ReplicatedUsing=OnRep_Mana)
	int32 RU_Mana;

	UFUNCTION()
	void OnRep_Mana();
};

