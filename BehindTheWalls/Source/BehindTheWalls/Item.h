// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class BEHINDTHEWALLS_API AItem : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere)
	uint32 id;
	UPROPERTY(EditAnywhere)
	uint16 slot;
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual uint32 GetId();

	virtual uint16 GetSlot();
};
