// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Sensor : ModuleRules
{
	public Sensor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bUsePrecompiled = true;
        PrecompileForTargets = PrecompileTargetsType.Any;
        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...

			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Networking",
                "NetworkPlugin",
                "ImageWrapper",

				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "NetworkPlugin",
                "ImageWrapper",

				// ... add private dependencies that you statically link with here ...	
			}
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}
