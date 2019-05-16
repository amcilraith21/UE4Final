// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_Asteroid_generated_h
#error "Asteroid.generated.h already included, missing '#pragma once' in Asteroid.h"
#endif
#define FINALPROJECT_Asteroid_generated_h

#define FinalProject_Source_FinalProject_Asteroid_h_13_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_Asteroid_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_Asteroid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend struct Z_Construct_UClass_AAsteroid_Statics; \
public: \
	DECLARE_CLASS(AAsteroid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid)


#define FinalProject_Source_FinalProject_Asteroid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend struct Z_Construct_UClass_AAsteroid_Statics; \
public: \
	DECLARE_CLASS(AAsteroid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid)


#define FinalProject_Source_FinalProject_Asteroid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsteroid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public:


#define FinalProject_Source_FinalProject_Asteroid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroid)


#define FinalProject_Source_FinalProject_Asteroid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sizeCategory() { return STRUCT_OFFSET(AAsteroid, sizeCategory); } \
	FORCEINLINE static uint32 __PPO__speedModifier() { return STRUCT_OFFSET(AAsteroid, speedModifier); } \
	FORCEINLINE static uint32 __PPO__minVelocity() { return STRUCT_OFFSET(AAsteroid, minVelocity); }


#define FinalProject_Source_FinalProject_Asteroid_h_10_PROLOG
#define FinalProject_Source_FinalProject_Asteroid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Asteroid_h_13_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Asteroid_h_13_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_Asteroid_h_13_INCLASS \
	FinalProject_Source_FinalProject_Asteroid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_Asteroid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Asteroid_h_13_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Asteroid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Asteroid_h_13_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Asteroid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AAsteroid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_Asteroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
