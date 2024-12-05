// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CoinGameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_CoinGameCharacter_generated_h
#error "CoinGameCharacter.generated.h already included, missing '#pragma once' in CoinGameCharacter.h"
#endif
#define NETWORKBASIC_CoinGameCharacter_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinGameCharacter(); \
	friend struct Z_Construct_UClass_ACoinGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ACoinGameCharacter, AHCharBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ACoinGameCharacter)


#define FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoinGameCharacter(ACoinGameCharacter&&); \
	ACoinGameCharacter(const ACoinGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoinGameCharacter) \
	NO_API virtual ~ACoinGameCharacter();


#define FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_9_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ACoinGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
