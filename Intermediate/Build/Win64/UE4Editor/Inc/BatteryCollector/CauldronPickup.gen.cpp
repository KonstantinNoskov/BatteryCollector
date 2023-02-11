// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/CauldronPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCauldronPickup() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ACauldronPickup_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ACauldronPickup();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void ACauldronPickup::StaticRegisterNativesACauldronPickup()
	{
	}
	UClass* Z_Construct_UClass_ACauldronPickup_NoRegister()
	{
		return ACauldronPickup::StaticClass();
	}
	struct Z_Construct_UClass_ACauldronPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BatteryPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACauldronPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACauldronPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CauldronPickup.h" },
		{ "ModuleRelativePath", "CauldronPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACauldronPickup_Statics::NewProp_BatteryPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "// Set the amount of power the battery gives to the character \n" },
		{ "ModuleRelativePath", "CauldronPickup.h" },
		{ "ToolTip", "Set the amount of power the battery gives to the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACauldronPickup_Statics::NewProp_BatteryPower = { "BatteryPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACauldronPickup, BatteryPower), METADATA_PARAMS(Z_Construct_UClass_ACauldronPickup_Statics::NewProp_BatteryPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACauldronPickup_Statics::NewProp_BatteryPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACauldronPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACauldronPickup_Statics::NewProp_BatteryPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACauldronPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACauldronPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACauldronPickup_Statics::ClassParams = {
		&ACauldronPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACauldronPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACauldronPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACauldronPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACauldronPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACauldronPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACauldronPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACauldronPickup, 2934590190);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ACauldronPickup>()
	{
		return ACauldronPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACauldronPickup(Z_Construct_UClass_ACauldronPickup, &ACauldronPickup::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ACauldronPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACauldronPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
