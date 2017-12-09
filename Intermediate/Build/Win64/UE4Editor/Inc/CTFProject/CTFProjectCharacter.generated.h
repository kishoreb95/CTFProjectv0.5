// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CTFPROJECT_CTFProjectCharacter_generated_h
#error "CTFProjectCharacter.generated.h already included, missing '#pragma once' in CTFProjectCharacter.h"
#endif
#define CTFPROJECT_CTFProjectCharacter_generated_h

#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_RPC_WRAPPERS
#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACTFProjectCharacter(); \
	friend CTFPROJECT_API class UClass* Z_Construct_UClass_ACTFProjectCharacter(); \
public: \
	DECLARE_CLASS(ACTFProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CTFProject"), NO_API) \
	DECLARE_SERIALIZER(ACTFProjectCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACTFProjectCharacter(); \
	friend CTFPROJECT_API class UClass* Z_Construct_UClass_ACTFProjectCharacter(); \
public: \
	DECLARE_CLASS(ACTFProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CTFProject"), NO_API) \
	DECLARE_SERIALIZER(ACTFProjectCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACTFProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACTFProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTFProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTFProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACTFProjectCharacter(ACTFProjectCharacter&&); \
	NO_API ACTFProjectCharacter(const ACTFProjectCharacter&); \
public:


#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACTFProjectCharacter(ACTFProjectCharacter&&); \
	NO_API ACTFProjectCharacter(const ACTFProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTFProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTFProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACTFProjectCharacter)


#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACTFProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACTFProjectCharacter, FollowCamera); }


#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_9_PROLOG
#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_RPC_WRAPPERS \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_INCLASS \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CTFProject_Source_CTFProject_CTFProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CTFProject_Source_CTFProject_CTFProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
