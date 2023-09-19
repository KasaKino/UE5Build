// Copyright Epic Games, Inc. All Rights Reserved.


#include "UE5BuildGameModeBase.h"
AUE5BuildGameModeBase::AUE5BuildGameModeBase() {
	PlayerControllerClass = AMainController::StaticClass();
	DefaultPawnClass = AMainCharacter::StaticClass();

}
