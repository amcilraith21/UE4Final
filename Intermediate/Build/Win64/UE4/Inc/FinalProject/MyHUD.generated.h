// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define FINALPROJECT_MyHUD_generated_h

#define FinalProject_Source_FinalProject_MyHUD_h_18_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_MyHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_MyHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define FinalProject_Source_FinalProject_MyHUD_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define FinalProject_Source_FinalProject_MyHUD_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public:


#define FinalProject_Source_FinalProject_MyHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyHUD(AMyHUD&&); \
	NO_API AMyHUD(const AMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD)


#define FinalProject_Source_FinalProject_MyHUD_h_18_PRIVATE_PROPERTY_OFFSET
#define FinalProject_Source_FinalProject_MyHUD_h_15_PROLOG
#define FinalProject_Source_FinalProject_MyHUD_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_MyHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_MyHUD_h_18_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_MyHUD_h_18_INCLASS \
	FinalProject_Source_FinalProject_MyHUD_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_MyHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_MyHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_MyHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_MyHUD_h_18_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_MyHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AMyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
