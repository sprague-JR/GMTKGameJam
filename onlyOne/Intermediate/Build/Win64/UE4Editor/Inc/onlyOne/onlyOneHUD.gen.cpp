// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "onlyOne/onlyOneHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeonlyOneHUD() {}
// Cross Module References
	ONLYONE_API UClass* Z_Construct_UClass_AonlyOneHUD_NoRegister();
	ONLYONE_API UClass* Z_Construct_UClass_AonlyOneHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_onlyOne();
// End Cross Module References
	void AonlyOneHUD::StaticRegisterNativesAonlyOneHUD()
	{
	}
	UClass* Z_Construct_UClass_AonlyOneHUD_NoRegister()
	{
		return AonlyOneHUD::StaticClass();
	}
	struct Z_Construct_UClass_AonlyOneHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AonlyOneHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_onlyOne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AonlyOneHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "onlyOneHUD.h" },
		{ "ModuleRelativePath", "onlyOneHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AonlyOneHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AonlyOneHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AonlyOneHUD_Statics::ClassParams = {
		&AonlyOneHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AonlyOneHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AonlyOneHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AonlyOneHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AonlyOneHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AonlyOneHUD, 1683523417);
	template<> ONLYONE_API UClass* StaticClass<AonlyOneHUD>()
	{
		return AonlyOneHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AonlyOneHUD(Z_Construct_UClass_AonlyOneHUD, &AonlyOneHUD::StaticClass, TEXT("/Script/onlyOne"), TEXT("AonlyOneHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AonlyOneHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
