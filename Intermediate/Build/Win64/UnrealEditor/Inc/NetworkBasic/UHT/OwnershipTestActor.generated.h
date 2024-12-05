// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ETC/OwnershipTestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_OwnershipTestActor_generated_h
#error "OwnershipTestActor.generated.h already included, missing '#pragma once' in OwnershipTestActor.h"
#endif
#define NETWORKBASIC_OwnershipTestActor_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOwnershipTestActor(); \
	friend struct Z_Construct_UClass_AOwnershipTestActor_Statics; \
public: \
	DECLARE_CLASS(AOwnershipTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(AOwnershipTestActor)


#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOwnershipTestActor(AOwnershipTestActor&&); \
	AOwnershipTestActor(const AOwnershipTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOwnershipTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOwnershipTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOwnershipTestActor) \
	NO_API virtual ~AOwnershipTestActor();


#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_9_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class AOwnershipTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
