// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_3D_RUNNERGameMode.h"
#include "CPP_3D_RUNNERCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_3D_RUNNERGameMode::ACPP_3D_RUNNERGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
