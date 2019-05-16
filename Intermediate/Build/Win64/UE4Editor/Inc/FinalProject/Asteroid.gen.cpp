// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject/Asteroid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroid() {}
// Cross Module References
	FINALPROJECT_API UClass* Z_Construct_UClass_AAsteroid_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_AAsteroid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FinalProject();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAsteroid::StaticRegisterNativesAAsteroid()
	{
	}
	UClass* Z_Construct_UClass_AAsteroid_NoRegister()
	{
		return AAsteroid::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sizeCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sizeCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsteroidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AsteroidMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asteroid.h" },
		{ "ModuleRelativePath", "Asteroid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroid_Statics::NewProp_minVelocity_MetaData[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Asteroid.h" },
		{ "ToolTip", "minimum velocity of the asteroid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroid_Statics::NewProp_minVelocity = { "minVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroid, minVelocity), METADATA_PARAMS(Z_Construct_UClass_AAsteroid_Statics::NewProp_minVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::NewProp_minVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroid_Statics::NewProp_speedModifier_MetaData[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Asteroid.h" },
		{ "ToolTip", "current velocity of the asteroid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroid_Statics::NewProp_speedModifier = { "speedModifier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroid, speedModifier), METADATA_PARAMS(Z_Construct_UClass_AAsteroid_Statics::NewProp_speedModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::NewProp_speedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroid_Statics::NewProp_sizeCategory_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Asteroid.h" },
		{ "ToolTip", "holds the size of the asteroid\nsmallest value is 1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAsteroid_Statics::NewProp_sizeCategory = { "sizeCategory", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroid, sizeCategory), METADATA_PARAMS(Z_Construct_UClass_AAsteroid_Statics::NewProp_sizeCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::NewProp_sizeCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroid_Statics::NewProp_sound_MetaData[] = {
		{ "Category", "Particle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asteroid.h" },
		{ "ToolTip", "explosion audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroid_Statics::NewProp_sound = { "sound", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroid, sound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroid_Statics::NewProp_sound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::NewProp_sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroid_Statics::NewProp_ExplosionParticle_MetaData[] = {
		{ "Category", "Particle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asteroid.h" },
		{ "ToolTip", "explotion particle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroid_Statics::NewProp_ExplosionParticle = { "ExplosionParticle", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroid, ExplosionParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroid_Statics::NewProp_ExplosionParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::NewProp_ExplosionParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroid_Statics::NewProp_AsteroidMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asteroid.h" },
		{ "ToolTip", "asteroid mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroid_Statics::NewProp_AsteroidMesh = { "AsteroidMesh", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroid, AsteroidMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroid_Statics::NewProp_AsteroidMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::NewProp_AsteroidMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroid_Statics::NewProp_minVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroid_Statics::NewProp_speedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroid_Statics::NewProp_sizeCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroid_Statics::NewProp_sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroid_Statics::NewProp_ExplosionParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroid_Statics::NewProp_AsteroidMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsteroid_Statics::ClassParams = {
		&AAsteroid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAsteroid_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAsteroid_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroid, 3187263245);
	template<> FINALPROJECT_API UClass* StaticClass<AAsteroid>()
	{
		return AAsteroid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroid(Z_Construct_UClass_AAsteroid, &AAsteroid::StaticClass, TEXT("/Script/FinalProject"), TEXT("AAsteroid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
