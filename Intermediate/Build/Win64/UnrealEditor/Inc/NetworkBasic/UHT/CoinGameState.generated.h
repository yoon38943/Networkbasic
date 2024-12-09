// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinFramework/CoinGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef NETWORKBASIC_CoinGameState_generated_h
#error "CoinGameState.generated.h already included, missing '#pragma once' in CoinGameState.h"
#endif
#define NETWORKBASIC_CoinGameState_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerStatesOrderedByScore);


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinGameState(); \
	friend struct Z_Construct_UClass_ACoinGameState_Statics; \
public: \
	DECLARE_CLASS(ACoinGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ACoinGameState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PickupsRemaining=NETFIELD_REP_START, \
		NETFIELD_REP_END=PickupsRemaining	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoinGameState(ACoinGameState&&); \
	ACoinGameState(const ACoinGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinGameState) \
	NO_API virtual ~ACoinGameState();


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_8_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_11_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ACoinGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
