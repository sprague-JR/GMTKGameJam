// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "onlyOneGameMode.h"
#include "onlyOneHUD.h"
#include "onlyOneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AonlyOneGameMode::AonlyOneGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AonlyOneHUD::StaticClass();
}
