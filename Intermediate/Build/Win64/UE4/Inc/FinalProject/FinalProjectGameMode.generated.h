// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_FinalProjectGameMode_generated_h
#error "FinalProjectGameMode.generated.h already included, missing '#pragma once' in FinalProjectGameMode.h"
#endif
#define FINALPROJECT_FinalProjectGameMode_generated_h

#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalProjectGameMode(); \
	friend struct Z_Construct_UClass_AFinalProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FinalProject"), FINALPROJECT_API) \
	DECLARE_SERIALIZER(AFinalProjectGameMode)


#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFinalProjectGameMode(); \
	friend struct Z_Construct_UClass_AFinalProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FinalProject"), FINALPROJECT_API) \
	DECLARE_SERIALIZER(AFinalProjectGameMode)


#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINALPROJECT_API AFinalProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALPROJECT_API, AFinalProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINALPROJECT_API AFinalProjectGameMode(AFinalProjectGameMode&&); \
	FINALPROJECT_API AFinalProjectGameMode(const AFinalProjectGameMode&); \
public:


#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FINALPROJECT_API AFinalProjectGameMode(AFinalProjectGameMode&&); \
	FINALPROJECT_API AFinalProjectGameMode(const AFinalProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALPROJECT_API, AFinalProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalProjectGameMode)


#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_9_PROLOG
#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_INCLASS \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AFinalProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_FinalProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
