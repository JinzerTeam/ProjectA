// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestUE4GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTUE4_API ATestUE4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()


	UFUNCTION(exec)
	void OutputModualList();
	
};
