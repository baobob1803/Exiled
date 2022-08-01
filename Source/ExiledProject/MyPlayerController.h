// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerInput.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class EXILEDPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		void FlushInputs(APlayerController* PlayerController);
};
