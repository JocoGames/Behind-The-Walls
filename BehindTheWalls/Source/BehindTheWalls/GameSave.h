// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameSave.generated.h"

/**
 * 
 */
UCLASS()
class BEHINDTHEWALLS_API UGameSave : public USaveGame
{
	GENERATED_BODY()
	
public:
	
	
	UPROPERTY(VisibleAnywhere, Category = Basic)
		uint32 Inventory[10];
		
	UPROPERTY(VisibleAnywhere, Category = Basic)
		FString SaveSlotName;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		uint32 UserIndex;
	UGameSave();
	
};
