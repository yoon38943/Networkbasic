// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinFramework/CoinGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_CoinGameMode_generated_h
#error "CoinGameMode.generated.h already included, missing '#pragma once' in CoinGameMode.h"
#endif
#define NETWORKBASIC_CoinGameMode_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinGameMode(); \
	friend struct Z_Construct_UClass_ACoinGameMode_Statics; \
public: \
	DECLARE_CLASS(ACoinGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ACoinGameMode)


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoinGameMode(ACoinGameMode&&); \
	ACoinGameMode(const ACoinGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinGameMode) \
	NO_API virtual ~ACoinGameMode();


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_7_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_10_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ACoinGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
