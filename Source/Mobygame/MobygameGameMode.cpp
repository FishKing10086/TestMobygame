// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobygameGameMode.h"
#include "MobygameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMobygameGameMode::AMobygameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
