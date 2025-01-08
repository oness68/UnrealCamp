// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task_5/Task_5GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_5GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TASK_5_API UClass* Z_Construct_UClass_ATask_5GameMode();
TASK_5_API UClass* Z_Construct_UClass_ATask_5GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task_5();
// End Cross Module References

// Begin Class ATask_5GameMode
void ATask_5GameMode::StaticRegisterNativesATask_5GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATask_5GameMode);
UClass* Z_Construct_UClass_ATask_5GameMode_NoRegister()
{
	return ATask_5GameMode::StaticClass();
}
struct Z_Construct_UClass_ATask_5GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Task_5GameMode.h" },
		{ "ModuleRelativePath", "Task_5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATask_5GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATask_5GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Task_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATask_5GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATask_5GameMode_Statics::ClassParams = {
	&ATask_5GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATask_5GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATask_5GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATask_5GameMode()
{
	if (!Z_Registration_Info_UClass_ATask_5GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATask_5GameMode.OuterSingleton, Z_Construct_UClass_ATask_5GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATask_5GameMode.OuterSingleton;
}
template<> TASK_5_API UClass* StaticClass<ATask_5GameMode>()
{
	return ATask_5GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATask_5GameMode);
ATask_5GameMode::~ATask_5GameMode() {}
// End Class ATask_5GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Camp_UnrealCamp_P_Unreal_Task_5_Source_Task_5_Task_5GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATask_5GameMode, ATask_5GameMode::StaticClass, TEXT("ATask_5GameMode"), &Z_Registration_Info_UClass_ATask_5GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATask_5GameMode), 742398950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Camp_UnrealCamp_P_Unreal_Task_5_Source_Task_5_Task_5GameMode_h_3948642316(TEXT("/Script/Task_5"),
	Z_CompiledInDeferFile_FID_Unreal_Camp_UnrealCamp_P_Unreal_Task_5_Source_Task_5_Task_5GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Camp_UnrealCamp_P_Unreal_Task_5_Source_Task_5_Task_5GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
