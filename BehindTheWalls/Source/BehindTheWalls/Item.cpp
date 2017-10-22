// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"

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

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//Gets slot item belongs
uint16 AItem::GetSlot()
{
	return slot;
}
//Gets item id
uint32 AItem::GetId()
{
	return id;
}

