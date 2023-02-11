// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/BatteryCollectorCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorCharacter() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABatteryCollectorCharacter::execCollectPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectPickup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABatteryCollectorCharacter::execUpdatePower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CharacterPowerChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePower(Z_Param_CharacterPowerChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABatteryCollectorCharacter::execGetCurrentPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABatteryCollectorCharacter::execGetInitialPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInitialPower();
		P_NATIVE_END;
	}
	static FName NAME_ABatteryCollectorCharacter_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
	void ABatteryCollectorCharacter::PowerChangeEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABatteryCollectorCharacter_PowerChangeEffect),NULL);
	}
	void ABatteryCollectorCharacter::StaticRegisterNativesABatteryCollectorCharacter()
	{
		UClass* Class = ABatteryCollectorCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickup", &ABatteryCollectorCharacter::execCollectPickup },
			{ "GetCurrentPower", &ABatteryCollectorCharacter::execGetCurrentPower },
			{ "GetInitialPower", &ABatteryCollectorCharacter::execGetInitialPower },
			{ "UpdatePower", &ABatteryCollectorCharacter::execUpdatePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// ????????? ?????? ?????? ???? ????? ?? ??????? ???????\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "CollectPickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics
	{
		struct BatteryCollectorCharacter_eventGetCurrentPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectorCharacter_eventGetCurrentPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "// Accessor function for character power\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Accessor function for character power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "GetCurrentPower", nullptr, nullptr, sizeof(BatteryCollectorCharacter_eventGetCurrentPower_Parms), Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics
	{
		struct BatteryCollectorCharacter_eventGetInitialPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectorCharacter_eventGetInitialPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "// Accessor function for initial power\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Accessor function for initial power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "GetInitialPower", nullptr, nullptr, sizeof(BatteryCollectorCharacter_eventGetInitialPower_Parms), Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "// Call visual effect\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Call visual effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "PowerChangeEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics
	{
		struct BatteryCollectorCharacter_eventUpdatePower_Parms
		{
			float CharacterPowerChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterPowerChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::NewProp_CharacterPowerChange = { "CharacterPowerChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectorCharacter_eventUpdatePower_Parms, CharacterPowerChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::NewProp_CharacterPowerChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "/*Update function for character power\n\x09 * @param CharacterPowerChange is the amount to change the power by, and it can be positive or negative\n\x09 */" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Update function for character power\n        * @param CharacterPowerChange is the amount to change the power by, and it can be positive or negative" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, nullptr, "UpdatePower", nullptr, nullptr, sizeof(BatteryCollectorCharacter_eventUpdatePower_Parms), Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister()
	{
		return ABatteryCollectorCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryCollectorCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryCollectorCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatteryCollectorCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickup, "CollectPickup" }, // 1423578684
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower, "GetCurrentPower" }, // 1702910810
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower, "GetInitialPower" }, // 2149799507
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect, "PowerChangeEffect" }, // 1970089698
		{ &Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower, "UpdatePower" }, // 1487418735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BatteryCollectorCharacter.h" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BatteryCollectorCharacter" },
		{ "Comment", "/* ???? ????? ???????? */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_InitialPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "// The starting power level of our character\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "The starting power level of our character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_InitialPower = { "InitialPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, InitialPower), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_InitialPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_InitialPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_SpeedFactor_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "// Multiplier for character speed\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Multiplier for character speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_SpeedFactor = { "SpeedFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, SpeedFactor), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_SpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_SpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "// Speed when the power level = 0\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Speed when the power level = 0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, BaseSpeed), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CurrentPower_MetaData[] = {
		{ "Category", "Power" },
		{ "Comment", "// Current power level of our character\n" },
		{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
		{ "ToolTip", "Current power level of our character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CurrentPower = { "CurrentPower", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorCharacter, CurrentPower), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CurrentPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CurrentPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryCollectorCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_InitialPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_SpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_BaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorCharacter_Statics::NewProp_CurrentPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryCollectorCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryCollectorCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryCollectorCharacter_Statics::ClassParams = {
		&ABatteryCollectorCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatteryCollectorCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryCollectorCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryCollectorCharacter, 3198848965);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatteryCollectorCharacter>()
	{
		return ABatteryCollectorCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorCharacter(Z_Construct_UClass_ABatteryCollectorCharacter, &ABatteryCollectorCharacter::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryCollectorCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
