// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "BatteryCollectorGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryCollectorGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ABatteryCollectorGameModeBase();
	

	virtual void StartPlay() override;
};
