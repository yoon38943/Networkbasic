// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinFramework/CoinPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_CoinPlayerState_generated_h
#error "CoinPlayerState.generated.h already included, missing '#pragma once' in CoinPlayerState.h"
#endif
#define NETWORKBASIC_CoinPlayerState_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinPlayerState(); \
	friend struct Z_Construct_UClass_ACoinPlayerState_Statics; \
public: \
	DECLARE_CLASS(ACoinPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ACoinPlayerState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Pickups=NETFIELD_REP_START, \
		NETFIELD_REP_END=Pickups	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoinPlayerState(ACoinPlayerState&&); \
	ACoinPlayerState(const ACoinPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinPlayerState) \
	NO_API virtual ~ACoinPlayerState();


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_7_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ACoinPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
