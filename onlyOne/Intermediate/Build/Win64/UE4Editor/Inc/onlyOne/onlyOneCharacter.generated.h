// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLYONE_onlyOneCharacter_generated_h
#error "onlyOneCharacter.generated.h already included, missing '#pragma once' in onlyOneCharacter.h"
#endif
#define ONLYONE_onlyOneCharacter_generated_h

#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_RPC_WRAPPERS
#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAonlyOneCharacter(); \
	friend struct Z_Construct_UClass_AonlyOneCharacter_Statics; \
public: \
	DECLARE_CLASS(AonlyOneCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/onlyOne"), NO_API) \
	DECLARE_SERIALIZER(AonlyOneCharacter)


#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAonlyOneCharacter(); \
	friend struct Z_Construct_UClass_AonlyOneCharacter_Statics; \
public: \
	DECLARE_CLASS(AonlyOneCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/onlyOne"), NO_API) \
	DECLARE_SERIALIZER(AonlyOneCharacter)


#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AonlyOneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AonlyOneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AonlyOneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AonlyOneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AonlyOneCharacter(AonlyOneCharacter&&); \
	NO_API AonlyOneCharacter(const AonlyOneCharacter&); \
public:


#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AonlyOneCharacter(AonlyOneCharacter&&); \
	NO_API AonlyOneCharacter(const AonlyOneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AonlyOneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AonlyOneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AonlyOneCharacter)


#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AonlyOneCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AonlyOneCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AonlyOneCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AonlyOneCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AonlyOneCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AonlyOneCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AonlyOneCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AonlyOneCharacter, L_MotionController); }


#define onlyOne_Source_onlyOne_onlyOneCharacter_h_11_PROLOG
#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_RPC_WRAPPERS \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_INCLASS \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define onlyOne_Source_onlyOne_onlyOneCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_INCLASS_NO_PURE_DECLS \
	onlyOne_Source_onlyOne_onlyOneCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLYONE_API UClass* StaticClass<class AonlyOneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID onlyOne_Source_onlyOne_onlyOneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
