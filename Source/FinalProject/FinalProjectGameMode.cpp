// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FinalProjectGameMode.h"
#include "FinalProjectPawn.h"
#include "MyHUD.h"

AFinalProjectGameMode::AFinalProjectGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFinalProjectPawn::StaticClass();
	HUDClass = AMyHUD::StaticClass();
}
