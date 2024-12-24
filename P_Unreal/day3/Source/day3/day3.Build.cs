// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class day3 : ModuleRules
{
	public day3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
