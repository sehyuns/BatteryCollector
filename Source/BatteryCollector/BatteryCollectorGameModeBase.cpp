// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "BatteryCollectorGameModeBase.h"



ABatteryCollectorGameModeBase::ABatteryCollectorGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawn(TEXT("/Game/Blueprints/BatteryCharacter_BP"));
	if (NULL != PlayerPawn.Class)
	{
		DefaultPawnClass = PlayerPawn.Class;

		UE_LOG(LogClass, Log, TEXT("Constructor for new player!!"));
	}
}

void ABatteryCollectorGameModeBase::StartPlay()
{
	Super::StartPlay();

	UE_LOG(LogClass, Log, TEXT("Start play in GameMode"));
}
