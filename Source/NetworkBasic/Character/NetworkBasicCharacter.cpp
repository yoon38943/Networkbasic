// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkBasicCharacter.h"

#include <rapidjson/document.h>

#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "../ETC/HDebugMacros.h"
#include "Net/UnrealNetwork.h"


ANetworkBasicCharacter::ANetworkBasicCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
}

void ANetworkBasicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FString LocalRoleString = ROLE_TO_STRING(GetLocalRole());
	const FString RemoteRoleString = ROLE_TO_STRING(GetRemoteRole());

	const AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	const AGameStateBase* GameState = GetWorld()->GetGameState();
	const APlayerController* PlayerController = Cast<APlayerController>(GetController());
	const AHUD* HUD = PlayerController != nullptr ? PlayerController->GetHUD() : nullptr;

	const FString GameModeString = GameMode != nullptr ? TEXT("Valid") : TEXT("Invalid");
	const FString GameStateString = GameState != nullptr ? TEXT("Valid") : TEXT("Invalid");
	const FString PlayerStateString = GetPlayerState() != nullptr ? TEXT("Valid") : TEXT("Invalid");
	const FString PawnName = GetName();
	const FString PlayerControllerString = PlayerController != nullptr ? TEXT("Valid") : TEXT("Invalid");
	const FString HUDString = HUD != nullptr ? TEXT("Valid") : TEXT("Invalid");

	FString Values = FString::Printf(TEXT("LocalRole = %s\nRemoteRole = %s\nGameMode = %s\nGameState = %s\nPlayerState = %s\nPawn = %s\nController = %s\nHUD = %s\n"),
		*LocalRoleString, *RemoteRoleString, *GameModeString, *GameStateString, *PlayerStateString, *PawnName, *PlayerControllerString, *HUDString);

	
	if (HasAuthority())
	{
		R_Health += 1.0f;

		//FString str = FString::Printf(TEXT("[%s] to Add"), *LocalRoleString);
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, *str);
	}

	FString Values2 = FString::Printf(TEXT("\n\nHealth: %.2f"), R_Health);
	Values.Append(Values2);

	
	DrawDebugString(GetWorld(), GetActorLocation(), Values, nullptr, FColor::White, 0.0f, true);

	
}

void ANetworkBasicCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 추가 복제 조건없이 다음 매크로를 사용해 리플리케이션
	DOREPLIFETIME(ANetworkBasicCharacter, R_Health);
}


void ANetworkBasicCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void ANetworkBasicCharacter::OpenLevel()
{
	UWorld* World = GetWorld();
	if (World)
	{
		World->ServerTravel("/Game/ThirdPerson/Maps/L_Lobby?listen");
	}
}

void ANetworkBasicCharacter::CallOpenLevel(const FString& Address)
{
	UGameplayStatics::OpenLevel(this, *Address);
}

void ANetworkBasicCharacter::CallClientTravel(const FString& Address)
{
	APlayerController* PlayerController = GetGameInstance()->GetFirstLocalPlayerController();
	if (PlayerController)
	{
		PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
	}
}

void ANetworkBasicCharacter::OnRep_Mana()
{
	const FString String = FString::Printf(TEXT("Changed current mana %d"), RU_Mana);
	GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, String);
}



//////////////////////////////////////////////////////////////////////////
// Input

void ANetworkBasicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// ���߿� �߰��Ǵ� �Է¸� ó��
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(CommandAction, ETriggerEvent::Triggered, this, &ANetworkBasicCharacter::RPCCommand);
	}
}

void ANetworkBasicCharacter::RPCCommand(const FInputActionValue& Value)
{
	FVector Command = Value.Get<FVector>();
	if (Command.X == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Command 1");
		ServerMsgTest(30);
	}
	else if (Command.X == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Command 2");
		ServerMsgTest(1234567);
	}
	else if (Command.X == 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Command 3");
		if (HasAuthority())
		{
			ClientMsgTest(999);	// 리슨서버 자기자신에게만 보내짐..( 당연하다 => 이렇게 사용하면 안 됨 ) ==> NetMultiCast로 변경해야 모든 Client 들에게 정보가 감
			ClientAllMsgTest(777);
		}
	}
}

// ServerMsgTest RPC 함수의 (값)유효성 체크
bool ANetworkBasicCharacter::ServerMsgTest_Validate(int32 Value)
{
	if (Value > 10000)
	{
		return false;	//비정상값 => Client를 끊어버린다
	}
	return true;	// 정상
}

void ANetworkBasicCharacter::ServerMsgTest_Implementation(int32 Value)
{
	FString str = FString::Printf(TEXT("ServerMsgTest : %d"), Value);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, str);
}

void ANetworkBasicCharacter::ClientMsgTest_Implementation(int32 Value)
{
	FString str = FString::Printf(TEXT("ClientMsgTest : %d"), Value);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, str);
}

void ANetworkBasicCharacter::ClientAllMsgTest_Implementation(int32 Value)
{
	FString str = FString::Printf(TEXT("MulticastMsgTest : %d"), Value);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, str);
}
