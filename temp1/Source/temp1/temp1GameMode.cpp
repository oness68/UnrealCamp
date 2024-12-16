// Copyright Epic Games, Inc. All Rights Reserved.

#include "temp1GameMode.h"
#include "temp1Character.h"
#include "UObject/ConstructorHelpers.h"

Atemp1GameMode::Atemp1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
