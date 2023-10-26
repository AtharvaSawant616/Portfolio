// Fill out your copyright notice in the Description page of Project Settings.


#include "ATVS_CPP_CHAR.h"
#include "ATVS_CPP_GAME_MODE.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Pawn.h"

// Sets default values
AATVS_CPP_CHAR::AATVS_CPP_CHAR()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Atharva's Camera Boom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Atharva's Follow Camera"));
	FollowCamera->SetupAttachment(CameraBoom); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;

	CameraBoom->SetRelativeLocation(FVector(0, 0, 90));
}

// Called when the game starts or when spawned
void AATVS_CPP_CHAR::BeginPlay()
{
	Super::BeginPlay();
	//AddMovementInput(UKismetMathLibrary::GetForwardVector(GetControlRotation()),1);
	GameModeRef = Cast<AATVS_CPP_GAME_MODE>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void AATVS_CPP_CHAR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddMovementInput(FVector(1, 0, 0));
}

// Called to bind functionality to input
void AATVS_CPP_CHAR::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AATVS_CPP_CHAR::AtvsJump);
	//PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AATVS_CPP_CHAR::AtvsMoveFwdBkwd);
	//PlayerInputComponent->BindAxis("Move Right / Left", this, &AATVS_CPP_CHAR::AtvsMoveRtLt);
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &AATVS_CPP_CHAR::AtvsTurnRtLt);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &AATVS_CPP_CHAR::AtvsLookUpDown);
	PlayerInputComponent->BindAction("Left", IE_Pressed, this, &AATVS_CPP_CHAR::AtvsGoLeft);
	PlayerInputComponent->BindAction("Right", IE_Pressed, this, &AATVS_CPP_CHAR::AtvsGoRight);
}

void AATVS_CPP_CHAR::AtvsJump()
{
	Jump();
	UE_LOG(LogTemp, Warning, TEXT("Char is jumping."));
}

void AATVS_CPP_CHAR::AtvsMoveFwdBkwd(float value)
{
	AddMovementInput(UKismetMathLibrary::GetForwardVector(GetControlRotation()), value);
	UE_LOG(LogTemp, Warning, TEXT("Char is moving Fwd/Bkwd."));
}

void AATVS_CPP_CHAR::AtvsMoveRtLt(float value)
{
	AddMovementInput(UKismetMathLibrary::GetRightVector(GetControlRotation()), value);
	UE_LOG(LogTemp, Warning, TEXT("Char is moving Rt/Lt."));
}

void AATVS_CPP_CHAR::AtvsLookUpDown(float value)
{
	AddControllerPitchInput(value);
}

void AATVS_CPP_CHAR::AtvsTurnRtLt(float value)
{
	AddControllerYawInput(value);
}

void AATVS_CPP_CHAR::AtvsGoLeft()
{
	nextlane = FMath::Clamp(current_lane - 1, 0, 2);
	start_lane = GetActorLocation().Y;
	goal_lane = GameModeRef->LaneLocations[nextlane];
	current_lane = nextlane;
	UE_LOG(LogTemp, Warning, TEXT("Left. %d"), nextlane);
	Movetolane(start_lane, goal_lane);
}

void AATVS_CPP_CHAR::AtvsGoRight()
{
	nextlane = FMath::Clamp(current_lane + 1, 0, 2);
	start_lane = GetActorLocation().Y;
	goal_lane = GameModeRef->LaneLocations[nextlane];
	current_lane = nextlane;
	UE_LOG(LogTemp, Warning, TEXT("Right. %d"),nextlane);
	Movetolane(start_lane, goal_lane);
}

/*void AATVS_CPP_CHAR::Movetolane()
{
	if (!GameModeRef)
	{
		return;
	}
	targetloc = GameModeRef->LaneLocations[nextlane];
	UE_LOG(LogTemp, Warning, TEXT("%d"), nextlane);
	SetActorLocation(FVector(GetActorLocation().X, targetloc, GetActorLocation().Z));
	current_lane = nextlane;
}*/

