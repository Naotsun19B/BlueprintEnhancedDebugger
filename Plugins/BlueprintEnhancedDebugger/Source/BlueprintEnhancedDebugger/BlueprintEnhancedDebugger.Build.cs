// Copyright 2021 Naotsun. All Rights Reserved.

using UnrealBuildTool;

public class BlueprintEnhancedDebugger : ModuleRules
{
	public BlueprintEnhancedDebugger(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Public/BlueprintEnhancedDebugger.h";
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
			);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
			);
	}
}
