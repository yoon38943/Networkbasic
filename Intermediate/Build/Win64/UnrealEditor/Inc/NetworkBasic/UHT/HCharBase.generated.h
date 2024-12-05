// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/HCharBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_HCharBase_generated_h
#error "HCharBase.generated.h already included, missing '#pragma once' in HCharBase.h"
#endif
#define NETWORKBASIC_HCharBase_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_Character_HCharBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHCharBase(); \
	friend struct Z_Construct_UClass_AHCharBase_Statics; \
public: \
	DECLARE_CLASS(AHCharBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(AHCharBase)


#define FID_NetworkBasic_1__Source_NetworkBasic_Character_HCharBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHCharBase(AHCharBase&&); \
	AHCharBase(const AHCharBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHCharBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHCharBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHCharBase) \
	NO_API virtual ~AHCharBase();


#define FID_NetworkBasic_1__Source_NetworkBasic_Character_HCharBase_h_13_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_Character_HCharBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_Character_HCharBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_Character_HCharBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class AHCharBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_Character_HCharBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
