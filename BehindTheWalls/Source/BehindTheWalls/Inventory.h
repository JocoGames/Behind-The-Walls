// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "GameSave.h"

/**
 * 
 */
class BEHINDTHEWALLS_API Inventory
{
private:
	uint32 *items = new uint32[slots];
public:
	const static int slots = 10;
	Inventory();
	~Inventory();
	void SaveInventory(UGameSave* SaveGameInstance);
	void LoadInventory(UGameSave* LoadGameInstance);
	bool Add(AItem *toAdd);
	bool RemoveByItem(AItem *toRemove);
	bool RemoveBySlot(uint16 slot);
	void Print();
};

