// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWSCharacter() {}
// Cross Module References
	WINGSUIT_API UClass* Z_Construct_UClass_AWSCharacter_NoRegister();
	WINGSUIT_API UClass* Z_Construct_UClass_AWSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_WingSuit();
	WINGSUIT_API UFunction* Z_Construct_UFunction_AWSCharacter_FlyingTick();
	WINGSUIT_API UFunction* Z_Construct_UFunction_AWSCharacter_OnImpactDuringFlying();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	static FName NAME_AWSCharacter_FlyingTick = FName(TEXT("FlyingTick"));
	void AWSCharacter::FlyingTick(float DeltaTime)
	{
		WSCharacter_eventFlyingTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AWSCharacter_FlyingTick),&Parms);
	}
	static FName NAME_AWSCharacter_OnImpactDuringFlying = FName(TEXT("OnImpactDuringFlying"));
	void AWSCharacter::OnImpactDuringFlying(FHitResult const& Hit, bool bIsWalkableFloor)
	{
		WSCharacter_eventOnImpactDuringFlying_Parms Parms;
		Parms.Hit=Hit;
		Parms.bIsWalkableFloor=bIsWalkableFloor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWSCharacter_OnImpactDuringFlying),&Parms);
	}
	void AWSCharacter::StaticRegisterNativesAWSCharacter()
	{
	}
	UFunction* Z_Construct_UFunction_AWSCharacter_FlyingTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WSCharacter_eventFlyingTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Character Movement: Flying" },
				{ "ModuleRelativePath", "Public/WSCharacter.h" },
				{ "ToolTip", "Entry point for handling of flying movement.\n--------------------------------------------\nAdded a \"FlyingTick\" into CharacterMovementComponent because calculating the movement\nfrom within the physics loop results in high accuracy that wont cause significant\nindiscrepancies at varied frame rates." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWSCharacter, "FlyingTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(WSCharacter_eventFlyingTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWSCharacter_OnImpactDuringFlying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsWalkableFloor_SetBit = [](void* Obj){ ((WSCharacter_eventOnImpactDuringFlying_Parms*)Obj)->bIsWalkableFloor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWalkableFloor = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsWalkableFloor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WSCharacter_eventOnImpactDuringFlying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsWalkableFloor_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(WSCharacter_eventOnImpactDuringFlying_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsWalkableFloor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Character Movement: Flying" },
				{ "ModuleRelativePath", "Public/WSCharacter.h" },
				{ "ToolTip", "Called by WSCharacterMovementComponent to notify that we have impacted another\nobject while flying.\n@param Hit : The hit result for the impacted object\n@param bIsWalkableFloor : True if the impacted object can be walked on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWSCharacter, "OnImpactDuringFlying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(WSCharacter_eventOnImpactDuringFlying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWSCharacter_NoRegister()
	{
		return AWSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AWSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_WingSuit,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWSCharacter_FlyingTick, "FlyingTick" }, // 251091855
				{ &Z_Construct_UFunction_AWSCharacter_OnImpactDuringFlying, "OnImpactDuringFlying" }, // 1270797156
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "WSCharacter.h" },
				{ "ModuleRelativePath", "Public/WSCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWSCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWSCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWSCharacter, 254811076);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWSCharacter(Z_Construct_UClass_AWSCharacter, &AWSCharacter::StaticClass, TEXT("/Script/WingSuit"), TEXT("AWSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
