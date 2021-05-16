// Copyright 2021 Naotsun. All Rights Reserved.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(LogBlueprintEnhancedDebugger);

class FBlueprintEnhancedDebuggerModule : public IModuleInterface
{
public:
	// IModuleInterface interface.
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	// End of IModuleInterface interface.
};

#define LOCTEXT_NAMESPACE "FBlueprintEnhancedDebuggerModule"

void FBlueprintEnhancedDebuggerModule::StartupModule()
{

}

void FBlueprintEnhancedDebuggerModule::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlueprintEnhancedDebuggerModule, BlueprintEnhancedDebugger)