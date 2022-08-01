// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::FlushInputs(APlayerController* PlayerController)
{
	PlayerController->PlayerInput->FlushPressedKeys();
}
