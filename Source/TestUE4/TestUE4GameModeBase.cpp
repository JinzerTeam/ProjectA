// Fill out your copyright notice in the Description page of Project Settings.

#include "TestUE4GameModeBase.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_CLASS(LogTestMode, Log, All)

void ATestUE4GameModeBase::OutputModualList()
{
	TArray<FModuleStatus> Modules;
	FModuleManager::Get().QueryModules(Modules);

	for (int32 MIndex=0; MIndex < Modules.Num(); ++MIndex)
	{

		UE_LOG(LogTestMode, Log, TEXT("QueryModules Name: %s, state: %d"), *Modules[MIndex].Name, Modules[MIndex].bIsLoaded);
	}
}

