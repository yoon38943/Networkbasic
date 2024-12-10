// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/ItemBuffComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_ItemBuffComponent_generated_h
#error "ItemBuffComponent.generated.h already included, missing '#pragma once' in ItemBuffComponent.h"
#endif
#define NETWORKBASIC_ItemBuffComponent_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSpeedBuff_Implementation(float BaseSpeed); \
	DECLARE_FUNCTION(execMulticastSpeedBuff);


#define FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_CALLBACK_WRAPPERS
#define FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemBuffComponent(); \
	friend struct Z_Construct_UClass_UItemBuffComponent_Statics; \
public: \
	DECLARE_CLASS(UItemBuffComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(UItemBuffComponent)


#define FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemBuffComponent(UItemBuffComponent&&); \
	UItemBuffComponent(const UItemBuffComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBuffComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBuffComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemBuffComponent) \
	NO_API virtual ~UItemBuffComponent();


#define FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_8_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_CALLBACK_WRAPPERS \
	FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class UItemBuffComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
