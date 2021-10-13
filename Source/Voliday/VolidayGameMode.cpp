// Copyright Epic Games, Inc. All Rights Reserved.

#include "VolidayGameMode.h"
#include "VolidayPlayerController.h"
#include "VolidayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVolidayGameMode::AVolidayGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AVolidayPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}