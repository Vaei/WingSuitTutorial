// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef WINGSUIT_WSCharacter_generated_h
#error "WSCharacter.generated.h already included, missing '#pragma once' in WSCharacter.h"
#endif
#define WINGSUIT_WSCharacter_generated_h

#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_RPC_WRAPPERS
#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_EVENT_PARMS \
	struct WSCharacter_eventFlyingTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct WSCharacter_eventOnImpactDuringFlying_Parms \
	{ \
		FHitResult Hit; \
		bool bIsWalkableFloor; \
	};


#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_CALLBACK_WRAPPERS
#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWSCharacter(); \
	friend WINGSUIT_API class UClass* Z_Construct_UClass_AWSCharacter(); \
public: \
	DECLARE_CLASS(AWSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WingSuit"), NO_API) \
	DECLARE_SERIALIZER(AWSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWSCharacter(); \
	friend WINGSUIT_API class UClass* Z_Construct_UClass_AWSCharacter(); \
public: \
	DECLARE_CLASS(AWSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WingSuit"), NO_API) \
	DECLARE_SERIALIZER(AWSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWSCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWSCharacter(AWSCharacter&&); \
	NO_API AWSCharacter(const AWSCharacter&); \
public:


#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWSCharacter(AWSCharacter&&); \
	NO_API AWSCharacter(const AWSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWSCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWSCharacter)


#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define WingSuit_Source_WingSuit_Public_WSCharacter_h_9_PROLOG \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_EVENT_PARMS


#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_RPC_WRAPPERS \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_CALLBACK_WRAPPERS \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_INCLASS \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WingSuit_Source_WingSuit_Public_WSCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_CALLBACK_WRAPPERS \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_INCLASS_NO_PURE_DECLS \
	WingSuit_Source_WingSuit_Public_WSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WingSuit_Source_WingSuit_Public_WSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
