// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_BatteryCollectorCharacter_generated_h
#error "BatteryCollectorCharacter.generated.h already included, missing '#pragma once' in BatteryCollectorCharacter.h"
#endif
#define BATTERYCOLLECTOR_BatteryCollectorCharacter_generated_h

#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_SPARSE_DATA
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectPickup); \
	DECLARE_FUNCTION(execUpdatePower); \
	DECLARE_FUNCTION(execGetCurrentPower); \
	DECLARE_FUNCTION(execGetInitialPower);


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectPickup); \
	DECLARE_FUNCTION(execUpdatePower); \
	DECLARE_FUNCTION(execGetCurrentPower); \
	DECLARE_FUNCTION(execGetInitialPower);


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_EVENT_PARMS
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_CALLBACK_WRAPPERS
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryCollectorCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCollectorCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectorCharacter)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABatteryCollectorCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCollectorCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectorCharacter)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryCollectorCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryCollectorCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectorCharacter(ABatteryCollectorCharacter&&); \
	NO_API ABatteryCollectorCharacter(const ABatteryCollectorCharacter&); \
public:


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectorCharacter(ABatteryCollectorCharacter&&); \
	NO_API ABatteryCollectorCharacter(const ABatteryCollectorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryCollectorCharacter)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABatteryCollectorCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__InitialPower() { return STRUCT_OFFSET(ABatteryCollectorCharacter, InitialPower); } \
	FORCEINLINE static uint32 __PPO__SpeedFactor() { return STRUCT_OFFSET(ABatteryCollectorCharacter, SpeedFactor); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(ABatteryCollectorCharacter, BaseSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentPower() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CurrentPower); }


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_10_PROLOG \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_EVENT_PARMS


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_CALLBACK_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_INCLASS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_CALLBACK_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class ABatteryCollectorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
