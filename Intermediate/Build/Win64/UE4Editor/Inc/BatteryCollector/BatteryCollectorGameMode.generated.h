// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBatteryPlayState : uint8;
#ifdef BATTERYCOLLECTOR_BatteryCollectorGameMode_generated_h
#error "BatteryCollectorGameMode.generated.h already included, missing '#pragma once' in BatteryCollectorGameMode.h"
#endif
#define BATTERYCOLLECTOR_BatteryCollectorGameMode_generated_h

#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_SPARSE_DATA
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPowerToWin);


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPowerToWin);


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryCollectorGameMode(); \
	friend struct Z_Construct_UClass_ABatteryCollectorGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), BATTERYCOLLECTOR_API) \
	DECLARE_SERIALIZER(ABatteryCollectorGameMode)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABatteryCollectorGameMode(); \
	friend struct Z_Construct_UClass_ABatteryCollectorGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollector"), BATTERYCOLLECTOR_API) \
	DECLARE_SERIALIZER(ABatteryCollectorGameMode)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTERYCOLLECTOR_API ABatteryCollectorGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryCollectorGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERYCOLLECTOR_API, ABatteryCollectorGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERYCOLLECTOR_API ABatteryCollectorGameMode(ABatteryCollectorGameMode&&); \
	BATTERYCOLLECTOR_API ABatteryCollectorGameMode(const ABatteryCollectorGameMode&); \
public:


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERYCOLLECTOR_API ABatteryCollectorGameMode(ABatteryCollectorGameMode&&); \
	BATTERYCOLLECTOR_API ABatteryCollectorGameMode(const ABatteryCollectorGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERYCOLLECTOR_API, ABatteryCollectorGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryCollectorGameMode)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DecayRate() { return STRUCT_OFFSET(ABatteryCollectorGameMode, DecayRate); } \
	FORCEINLINE static uint32 __PPO__PowerToWin() { return STRUCT_OFFSET(ABatteryCollectorGameMode, PowerToWin); } \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(ABatteryCollectorGameMode, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ABatteryCollectorGameMode, CurrentWidget); }


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_19_PROLOG
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_INCLASS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_SPARSE_DATA \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class ABatteryCollectorGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_BatteryCollectorGameMode_h


#define FOREACH_ENUM_EBATTERYPLAYSTATE(op) \
	op(EBatteryPlayState::EPlaying) \
	op(EBatteryPlayState::EGameOver) \
	op(EBatteryPlayState::EWon) \
	op(EBatteryPlayState::EUnknown) 

enum class EBatteryPlayState : uint8;
template<> BATTERYCOLLECTOR_API UEnum* StaticEnum<EBatteryPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
