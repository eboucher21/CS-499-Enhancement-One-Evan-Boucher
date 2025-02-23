// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SurvivalMode_Code.generated.h"

/**
 * 
 */
UCLASS()
class BOUCHER_ARENASHOOTER_API ASurvivalMode_Code : public AGameMode
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void GamemodeSetup();

	UFUNCTION(BlueprintCallable)
	int SetNextWave(int wave);

	UFUNCTION(BlueprintCallable)
	void SpawnEnemiesC(int wave, TArray <AActor*> spawnpoints, AActor* player);
	
};
