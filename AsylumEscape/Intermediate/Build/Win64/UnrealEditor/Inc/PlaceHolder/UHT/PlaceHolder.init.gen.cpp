// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceHolder_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlaceHolder;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlaceHolder()
	{
		if (!Z_Registration_Info_UPackage__Script_PlaceHolder.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlaceHolder",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC93F5FCA,
				0xED725D5D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlaceHolder.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlaceHolder.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlaceHolder(Z_Construct_UPackage__Script_PlaceHolder, TEXT("/Script/PlaceHolder"), Z_Registration_Info_UPackage__Script_PlaceHolder, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC93F5FCA, 0xED725D5D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
