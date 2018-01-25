// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WSCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWSCharacterMovementComponent() {}
// Cross Module References
	WINGSUIT_API UClass* Z_Construct_UClass_UWSCharacterMovementComponent_NoRegister();
	WINGSUIT_API UClass* Z_Construct_UClass_UWSCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_WingSuit();
// End Cross Module References
	void UWSCharacterMovementComponent::StaticRegisterNativesUWSCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UWSCharacterMovementComponent_NoRegister()
	{
		return UWSCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UWSCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_WingSuit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WSCharacterMovementComponent.h" },
				{ "ModuleRelativePath", "Public/WSCharacterMovementComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWSCharacterMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWSCharacterMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWSCharacterMovementComponent, 1855670969);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWSCharacterMovementComponent(Z_Construct_UClass_UWSCharacterMovementComponent, &UWSCharacterMovementComponent::StaticClass, TEXT("/Script/WingSuit"), TEXT("UWSCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWSCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
