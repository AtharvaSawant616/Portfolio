// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_3D_RUNNER : ModuleRules
{
	public CPP_3D_RUNNER(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
