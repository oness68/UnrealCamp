// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "day3/day3GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeday3GameMode() {}

// Begin Cross Module References
DAY3_API UClass* Z_Construct_UClass_Aday3GameMode();
DAY3_API UClass* Z_Construct_UClass_Aday3GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_day3();
// End Cross Module References

// Begin Class Aday3GameMode
void Aday3GameMode::StaticRegisterNativesAday3GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aday3GameMode);
UClass* Z_Construct_UClass_Aday3GameMode_NoRegister()
{
	return Aday3GameMode::StaticClass();
}
struct Z_Construct_UClass_Aday3GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "day3GameMode.h" },
		{ "ModuleRelativePath", "day3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aday3GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aday3GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_day3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aday3GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aday3GameMode_Statics::ClassParams = {
	&Aday3GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aday3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aday3GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aday3GameMode()
{
	if (!Z_Registration_Info_UClass_Aday3GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aday3GameMode.OuterSingleton, Z_Construct_UClass_Aday3GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aday3GameMode.OuterSingleton;
}
template<> DAY3_API UClass* StaticClass<Aday3GameMode>()
{
	return Aday3GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aday3GameMode);
Aday3GameMode::~Aday3GameMode() {}
// End Class Aday3GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Camp_P_Unreal_day3_Source_day3_day3GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aday3GameMode, Aday3GameMode::StaticClass, TEXT("Aday3GameMode"), &Z_Registration_Info_UClass_Aday3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aday3GameMode), 227142191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Camp_P_Unreal_day3_Source_day3_day3GameMode_h_1521956555(TEXT("/Script/day3"),
	Z_CompiledInDeferFile_FID_Unreal_Camp_P_Unreal_day3_Source_day3_day3GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Camp_P_Unreal_day3_Source_day3_day3GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
