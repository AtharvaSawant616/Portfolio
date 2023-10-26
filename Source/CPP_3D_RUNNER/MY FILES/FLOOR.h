// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/BoxComponent.h"
#include "FLOOR.generated.h"

UCLASS()
class CPP_3D_RUNNER_API AFLOOR : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFLOOR();

	class AATVS_CPP_CHAR* MainRunner;

    class AATVS_CPP_GAME_MODE* GameModeRef;

	UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	UArrowComponent* SpawnPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	UArrowComponent* Left;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	UArrowComponent* Center;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	UArrowComponent* Right;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	UBoxComponent* BoxComp;
	USceneComponent* SceneComponent;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite);
    //ArrowComponent* LeftLane;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite);
	//rrowComponent* CenterLane;
	//ROPERTY(EditAnywhere, BlueprintReadWrite);
	//rrowComponent* RightLane;
	//ROPERTY(EditAnywhere, BlueprintReadWrite);
	//oxComponent* BoxComp;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FTimerHandle Activate_Floor_Destroyer;
	//UFUNCTION()
	void Destroy_the_floor();
	UFUNCTION()
	void OverLapWithPawn(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
