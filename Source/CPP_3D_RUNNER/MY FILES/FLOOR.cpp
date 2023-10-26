// Fill out your copyright notice in the Description page of Project Settings.


#include "FLOOR.h"
#include "Kismet/GameplayStatics.h"
#include "ATVS_CPP_CHAR.h"
#include "ATVS_CPP_GAME_MODE.h"

// Sets default values
AFLOOR::AFLOOR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor Static Mesh"));
	SpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Floor Spawn Point"));
	Left = CreateDefaultSubobject<UArrowComponent>(TEXT("Floor Left Lane"));
	Center = CreateDefaultSubobject<UArrowComponent>(TEXT("Floor Center Lane"));
	Right = CreateDefaultSubobject<UArrowComponent>(TEXT("Floor Right Lane"));
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Floor Scene Component"));
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Floor Box Detection Component"));
	RootComponent = SceneComponent;
	StaticMesh->SetupAttachment(SceneComponent);
	BoxComp->SetupAttachment(StaticMesh);
	SpawnPoint->SetupAttachment(StaticMesh);
	BoxComp->SetupAttachment(StaticMesh);
	SpawnPoint->SetupAttachment(StaticMesh);
	Left->SetupAttachment(StaticMesh);
	Center->SetupAttachment(StaticMesh);
	Right->SetupAttachment(StaticMesh);
	BoxComp->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
}

// Called when the game starts or when spawned
void AFLOOR::BeginPlay()
{
	Super::BeginPlay();
	GameModeRef = Cast<AATVS_CPP_GAME_MODE>(UGameplayStatics::GetGameMode(GetWorld()));
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AFLOOR::OverLapWithPawn);
} 

// Called every frame
void AFLOOR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFLOOR::OverLapWithPawn(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	MainRunner = Cast<AATVS_CPP_CHAR>(OtherActor);
	if (MainRunner)
	{
		if (GameModeRef)
		{
			UE_LOG(LogTemp, Warning, TEXT("Destroy."));
			GameModeRef->SpawntheFloor(true);
			GetWorld()->GetTimerManager().SetTimer(Activate_Floor_Destroyer, this, &AFLOOR::Destroy_the_floor, 2.f, true);
		}
	}
}

void AFLOOR::Destroy_the_floor()
{
	Destroy();
}

