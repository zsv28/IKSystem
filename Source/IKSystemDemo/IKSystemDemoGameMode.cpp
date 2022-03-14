// Copyright Epic Games, Inc. All Rights Reserved.

#include "IKSystemDemoGameMode.h"
#include "IKSystemDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIKSystemDemoGameMode::AIKSystemDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
