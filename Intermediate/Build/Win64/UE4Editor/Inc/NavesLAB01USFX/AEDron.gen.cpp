// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/AEDron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEDron() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AAEDron_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AAEDron();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigoAereo();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
// End Cross Module References
	void AAEDron::StaticRegisterNativesAAEDron()
	{
	}
	UClass* Z_Construct_UClass_AAEDron_NoRegister()
	{
		return AAEDron::StaticClass();
	}
	struct Z_Construct_UClass_AAEDron_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAEDron_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAereo,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEDron_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AEDron.h" },
		{ "ModuleRelativePath", "AEDron.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAEDron_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAEDron>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAEDron_Statics::ClassParams = {
		&AAEDron::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAEDron_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAEDron_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAEDron()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAEDron_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAEDron, 1882272288);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AAEDron>()
	{
		return AAEDron::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEDron(Z_Construct_UClass_AAEDron, &AAEDron::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AAEDron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEDron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
