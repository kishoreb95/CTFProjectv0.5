// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CTFGOGameMode.h"
#include "CTFGOCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACTFGOGameMode::ACTFGOGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
