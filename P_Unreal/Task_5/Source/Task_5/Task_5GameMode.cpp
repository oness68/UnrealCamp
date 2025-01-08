// Copyright Epic Games, Inc. All Rights Reserved.

#include "Task_5GameMode.h"
#include "Task_5Character.h"
#include "UObject/ConstructorHelpers.h"


ATask_5GameMode::ATask_5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	

}



