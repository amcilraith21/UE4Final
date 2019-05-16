// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_FinalProjectPawn_generated_h
#error "FinalProjectPawn.generated.h already included, missing '#pragma once' in FinalProjectPawn.h"
#endif
#define FINALPROJECT_FinalProjectPawn_generated_h

#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalProjectPawn(); \
	friend struct Z_Construct_UClass_AFinalProjectPawn_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectPawn)


#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFinalProjectPawn(); \
	friend struct Z_Construct_UClass_AFinalProjectPawn_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectPawn)


#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalProjectPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalProjectPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectPawn(AFinalProjectPawn&&); \
	NO_API AFinalProjectPawn(const AFinalProjectPawn&); \
public:


#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectPawn(AFinalProjectPawn&&); \
	NO_API AFinalProjectPawn(const AFinalProjectPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalProjectPawn)


#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AFinalProjectPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__Cannon() { return STRUCT_OFFSET(AFinalProjectPawn, Cannon); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AFinalProjectPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AFinalProjectPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Thrusters() { return STRUCT_OFFSET(AFinalProjectPawn, Thrusters); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AFinalProjectPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AFinalProjectPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AFinalProjectPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AFinalProjectPawn, MinSpeed); } \
	FORCEINLINE static uint32 __PPO__SlowDown() { return STRUCT_OFFSET(AFinalProjectPawn, SlowDown); }


#define FinalProject_Source_FinalProject_FinalProjectPawn_h_9_PROLOG
#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_INCLASS \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_FinalProjectPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AFinalProjectPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_FinalProjectPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
