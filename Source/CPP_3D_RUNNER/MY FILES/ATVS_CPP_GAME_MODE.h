// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FLOOR.h"
#include "Obstacle_1.h"
#include "GameFramework/GameModeBase.h"
#include "ATVS_CPP_GAME_MODE.generated.h"

/**
 * 
 */
UCLASS()
class CPP_3D_RUNNER_API AATVS_CPP_GAME_MODE : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere);
	TSubclassOf<AFLOOR> FloorSpawn;

	UPROPERTY(EditAnywhere);
	TSubclassOf<AObstacle_1> ObstacletoSpawn;

	FVector SpawnLoc;
	AFLOOR* SpawnedFloor;
	//TArray<float> LaneLocations;
	int LaneLocations[3];

	//class AATVS_CPP_GAME_MODE* GameModeRef;

	AATVS_CPP_GAME_MODE();
	virtual void BeginPlay() override;
	void SpawntheFloor(bool shouldSpawnObstacle=false);
	void SpawnObstacle();
};
