// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_Laser_generated_h
#error "Laser.generated.h already included, missing '#pragma once' in Laser.h"
#endif
#define FINALPROJECT_Laser_generated_h

#define FinalProject_Source_FinalProject_Laser_h_11_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_Laser_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_Laser_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaser(); \
	friend struct Z_Construct_UClass_ALaser_Statics; \
public: \
	DECLARE_CLASS(ALaser, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ALaser) \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \



#define FinalProject_Source_FinalProject_Laser_h_11_INCLASS \
private: \
	static void StaticRegisterNativesALaser(); \
	friend struct Z_Construct_UClass_ALaser_Statics; \
public: \
	DECLARE_CLASS(ALaser, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ALaser) \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \



#define FinalProject_Source_FinalProject_Laser_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaser(ALaser&&); \
	NO_API ALaser(const ALaser&); \
public:


#define FinalProject_Source_FinalProject_Laser_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaser(ALaser&&); \
	NO_API ALaser(const ALaser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaser)


#define FinalProject_Source_FinalProject_Laser_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__launchSpeed() { return STRUCT_OFFSET(ALaser, launchSpeed); } \
	FORCEINLINE static uint32 __PPO__survivalTime() { return STRUCT_OFFSET(ALaser, survivalTime); }


#define FinalProject_Source_FinalProject_Laser_h_9_PROLOG
#define FinalProject_Source_FinalProject_Laser_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Laser_h_11_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Laser_h_11_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_Laser_h_11_INCLASS \
	FinalProject_Source_FinalProject_Laser_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_Laser_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Laser_h_11_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Laser_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Laser_h_11_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Laser_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class ALaser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_Laser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
