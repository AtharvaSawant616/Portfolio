// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle_1.h"

// Sets default values
AObstacle_1::AObstacle_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Obs 1 Box"));
	RootComponent = Box;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Obs 1 Mesh"));
	StaticMesh->SetupAttachment(Box);
}

// Called when the game starts or when spawned
void AObstacle_1::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AObstacle_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

