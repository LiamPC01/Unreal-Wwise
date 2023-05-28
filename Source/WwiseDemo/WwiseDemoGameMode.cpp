// Copyright Epic Games, Inc. All Rights Reserved.

#include "WwiseDemoGameMode.h"
#include "WwiseDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWwiseDemoGameMode::AWwiseDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
