// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlaceHolder/PlaceHolderGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceHolderGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PLACEHOLDER_API UClass* Z_Construct_UClass_APlaceHolderGameModeBase();
	PLACEHOLDER_API UClass* Z_Construct_UClass_APlaceHolderGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlaceHolder();
// End Cross Module References
	void APlaceHolderGameModeBase::StaticRegisterNativesAPlaceHolderGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaceHolderGameModeBase);
	UClass* Z_Construct_UClass_APlaceHolderGameModeBase_NoRegister()
	{
		return APlaceHolderGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlaceHolderGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaceHolderGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlaceHolder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceHolderGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlaceHolderGameModeBase.h" },
		{ "ModuleRelativePath", "PlaceHolderGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaceHolderGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaceHolderGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaceHolderGameModeBase_Statics::ClassParams = {
		&APlaceHolderGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlaceHolderGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceHolderGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaceHolderGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APlaceHolderGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaceHolderGameModeBase.OuterSingleton, Z_Construct_UClass_APlaceHolderGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlaceHolderGameModeBase.OuterSingleton;
	}
	template<> PLACEHOLDER_API UClass* StaticClass<APlaceHolderGameModeBase>()
	{
		return APlaceHolderGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaceHolderGameModeBase);
	APlaceHolderGameModeBase::~APlaceHolderGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_GDC_GameProject_GDC_GAME_PROJECT_PlaceHolder_Source_PlaceHolder_PlaceHolderGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GDC_GameProject_GDC_GAME_PROJECT_PlaceHolder_Source_PlaceHolder_PlaceHolderGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlaceHolderGameModeBase, APlaceHolderGameModeBase::StaticClass, TEXT("APlaceHolderGameModeBase"), &Z_Registration_Info_UClass_APlaceHolderGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaceHolderGameModeBase), 378878344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GDC_GameProject_GDC_GAME_PROJECT_PlaceHolder_Source_PlaceHolder_PlaceHolderGameModeBase_h_1658682658(TEXT("/Script/PlaceHolder"),
		Z_CompiledInDeferFile_FID_GDC_GameProject_GDC_GAME_PROJECT_PlaceHolder_Source_PlaceHolder_PlaceHolderGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GDC_GameProject_GDC_GAME_PROJECT_PlaceHolder_Source_PlaceHolder_PlaceHolderGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
