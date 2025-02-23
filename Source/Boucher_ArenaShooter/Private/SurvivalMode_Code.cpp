// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalMode_Code.h"
#include <random>
#include "GameFramework/Actor.h"

void ASurvivalMode_Code::GamemodeSetup() {
	
}

//Sets the new wave
int ASurvivalMode_Code::SetNextWave(int wave) {

	wave++;

	return wave;
}


//Spawns number of enemies at random spawn locations based on wave number
void ASurvivalMode_Code::SpawnEnemiesC(int wave, TArray <AActor*> spawnpoints, AActor* player) {

	int aSize = sizeof(spawnpoints);
	for (size_t i = 0; i < wave*2-1; i++)
	{
		/*std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> distr(1, aSize);*/

		spawnpoints[1]->GetActorLocation();

		
	}
}