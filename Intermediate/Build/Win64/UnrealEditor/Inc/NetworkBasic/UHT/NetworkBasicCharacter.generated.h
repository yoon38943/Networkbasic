// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/NetworkBasicCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_NetworkBasicCharacter_generated_h
#error "NetworkBasicCharacter.generated.h already included, missing '#pragma once' in NetworkBasicCharacter.h"
#endif
#define NETWORKBASIC_NetworkBasicCharacter_generated_h

#define FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallClientTravel); \
	DECLARE_FUNCTION(execCallOpenLevel); \
	DECLARE_FUNCTION(execOpenLevel);


#define FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkBasicCharacter(); \
	friend struct Z_Construct_UClass_ANetworkBasicCharacter_Statics; \
public: \
	DECLARE_CLASS(ANetworkBasicCharacter, AHCharBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ANetworkBasicCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		R_Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=R_Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetworkBasicCharacter(ANetworkBasicCharacter&&); \
	ANetworkBasicCharacter(const ANetworkBasicCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkBasicCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkBasicCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkBasicCharacter) \
	NO_API virtual ~ANetworkBasicCharacter();


#define FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_15_PROLOG
#define FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ANetworkBasicCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
