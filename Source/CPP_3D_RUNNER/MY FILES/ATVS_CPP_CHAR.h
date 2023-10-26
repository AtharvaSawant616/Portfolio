// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ATVS_CPP_CHAR.generated.h"

UCLASS()
class CPP_3D_RUNNER_API AATVS_CPP_CHAR : public ACharacter
{
	GENERATED_BODY()

	    UPROPERTY(EditAnywhere)
		class USpringArmComponent* CameraBoom;

	    UPROPERTY(VisibleAnywhere)
		class UCameraComponent* FollowCamera;
public:
	// Sets default values for this character's properties
	AATVS_CPP_CHAR();
	class AATVS_CPP_GAME_MODE* GameModeRef;
	int current_lane = 1;
	int nextlane;
	float targetloc;
	float start_lane;
	float goal_lane;

	class AATVS_CPP_GAME_MODE* GMRef;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AtvsJump();
	void AtvsMoveFwdBkwd(float value);
	void AtvsMoveRtLt(float value);
	void AtvsTurnRtLt(float value);
	void AtvsLookUpDown(float value);
	void AtvsGoLeft();
	void AtvsGoRight();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Movetolane(float initloc, float goalloc);

};
