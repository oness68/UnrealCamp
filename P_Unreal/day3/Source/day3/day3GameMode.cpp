// Copyright Epic Games, Inc. All Rights Reserved.

#include "day3GameMode.h"
#include "day3Character.h"
#include "UObject/ConstructorHelpers.h"

Aday3GameMode::Aday3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
