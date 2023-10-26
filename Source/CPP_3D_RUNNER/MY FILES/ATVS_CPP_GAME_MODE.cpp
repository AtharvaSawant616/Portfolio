// Fill out your copyright notice in the Description page of Project Settings.


#include "ATVS_CPP_GAME_MODE.h"
#include "ATVS_CPP_CHAR.h"
#include "FLOOR.h"
#include "Kismet/GameplayStatics.h"
#include "stdlib.h"
#include "UObject/ConstructorHelpers.h"

AATVS_CPP_GAME_MODE::AATVS_CPP_GAME_MODE()
{
	
}

void AATVS_CPP_GAME_MODE::BeginPlay()
{
	SpawnLoc = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
	SpawnLoc.Z = SpawnLoc.Z - 50;
	SpawnLoc.X = SpawnLoc.X + 50;
	//GetWorld()->SpawnActor<AFLOOR>(FloorSpawn, SpawnLoc, FRotator(0, 0, 0));

	for (int i = 0; i < 3; i++)
	{
		SpawnedFloor = GetWorld()->SpawnActor<AFLOOR>(FloorSpawn, SpawnLoc, FRotator(0, 0, 0));
		SpawnLoc = SpawnedFloor->SpawnPoint->GetComponentLocation();
		SpawntheFloor();
	}

	if (SpawnedFloor)
	{
		LaneLocations[0] = (SpawnedFloor->Left->GetComponentLocation().Y);
		LaneLocations[1] = (SpawnedFloor->Center->GetComponentLocation().Y);
		LaneLocations[2] = (SpawnedFloor->Right->GetComponentLocation().Y);
	}
}

void AATVS_CPP_GAME_MODE::SpawntheFloor(bool shouldSpawnObstacle)
{
	UE_LOG(LogTemp, Warning, TEXT("TBC"));
	SpawnedFloor = GetWorld()->SpawnActor<AFLOOR>(FloorSpawn, SpawnLoc, FRotator(0, 0, 0));
	SpawnLoc = SpawnedFloor->SpawnPoint->GetComponentLocation();
	if (shouldSpawnObstacle)
	{
		SpawnObstacle();
	}
}

void AATVS_CPP_GAME_MODE::SpawnObstacle()
{
	if(ObstacletoSpawn)
	{
		int n = rand() % 10;
		int k = rand() % 3;
		if (n < 6)
		{
			if (k == 0)
			{
				FVector ObstacleSpawnedLocation = SpawnedFloor->Left->GetComponentLocation();
				AObstacle_1* SpawnedObstacle = GetWorld()->SpawnActor<AObstacle_1>(ObstacletoSpawn, ObstacleSpawnedLocation, FRotator(0, 0, 0));
			}
			if (k == 1)
			{
				FVector ObstacleSpawnedLocation = SpawnedFloor->Center->GetComponentLocation();
				AObstacle_1* SpawnedObstacle = GetWorld()->SpawnActor<AObstacle_1>(ObstacletoSpawn, ObstacleSpawnedLocation, FRotator(0, 0, 0));
			}
			if (k == 2)
			{
				FVector ObstacleSpawnedLocation = SpawnedFloor->Right->GetComponentLocation();
				AObstacle_1* SpawnedObstacle = GetWorld()->SpawnActor<AObstacle_1>(ObstacletoSpawn, ObstacleSpawnedLocation, FRotator(0, 0, 0));
			}
		}
		//FVector ObstacleSpawnedLocation = SpawnedFloor->Left->GetComponentLocation();
		//AObstacle_1* SpawnedObstacle = GetWorld()->SpawnActor<AObstacle_1>(ObstacletoSpawn, ObstacleSpawnedLocation, FRotator(0, 0, 0));
	}
}