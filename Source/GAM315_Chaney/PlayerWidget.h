// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAM315_CHANEY_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()
	// Set up to update the Player Widget's Health, Hunger, and Stamina bars based on the Player Character's current stats	
public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateBars(float Health1, float Hunger1, float Stamina1);

};
