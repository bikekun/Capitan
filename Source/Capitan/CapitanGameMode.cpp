// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Capitan.h"
#include "CapitanGameMode.h"
#include "CapitanCharacter.h"

ACapitanGameMode::ACapitanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Geometry/Meshes/fbx/botLuck/korpus/NewBlueprint"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
