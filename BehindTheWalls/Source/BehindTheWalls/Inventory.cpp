// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"
#include "GameSave.h"
#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
enum {
	NONE,
	HEAD,
	ARM_L,
	ARM_R,
	LEG_L,
	LEG_R,
	FOOT_L,
	FOOT_R,
	TORSO,
	BACK,
	HAND
};

Inventory::Inventory()
{
	
	UGameSave* GameInstance = Cast<UGameSave>(UGameplayStatics::CreateSaveGameObject(UGameSave::StaticClass()));
	if (UGameplayStatics::DoesSaveGameExist(GameInstance->SaveSlotName, GameInstance->UserIndex)) {
		LoadInventory(GameInstance);
	}
	else {
	
		items[0] = 32;
		SaveInventory(GameInstance);
	}
	
}

Inventory::~Inventory()
{
}
//add item to body
bool Inventory::Add(AItem *toAdd)
{
	//if item is already equiped then don't equipt
	if (items[toAdd->GetSlot()] == toAdd->GetId()) {
		return false;
	}
	//otherwise equipt
	else {
		items[toAdd->GetSlot()] = toAdd->GetId();
		return true;
	}
}
//Removes item from body
bool Inventory::RemoveByItem(AItem *toRemove)
{
	//if slot item does not equal removed item then dont remove
	if (items[toRemove->GetSlot()] != toRemove->GetId()) {
		return false;
	}
	else {
		items[toRemove->GetSlot()] = 0;
		return true;
	}
	
}
//Removes item from body slot
//This is less secure than removing by item
bool Inventory::RemoveBySlot(uint16 slot)
{
	items[slot] = 0;
	return true;
}

//Prints inventory
void Inventory::Print()
{
	FString temp = "";
	for (size_t i = 0; i < slots; i++)
	{
		temp += FString::FromInt(items[i]);
	}
	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *temp)
}
//Saves current items
void Inventory::SaveInventory(UGameSave *SaveGameInstance)
{
	for (size_t i = 0; i < slots; i++)
	{
		SaveGameInstance->Inventory[i] = items[i];
	}
	
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->SaveSlotName, SaveGameInstance->UserIndex);
	UE_LOG(LogTemp, Warning, TEXT("Saved"))
}
//Loads items into inventory
void Inventory::LoadInventory(UGameSave *LoadGameInstance)
{
	LoadGameInstance = Cast<UGameSave>(UGameplayStatics::LoadGameFromSlot(LoadGameInstance->SaveSlotName, LoadGameInstance->UserIndex));
	for (size_t i = 0; i < slots; i++)
	{
		items[i] = LoadGameInstance->Inventory[i];
	}
	Print();
}






