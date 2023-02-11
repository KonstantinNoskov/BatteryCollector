// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Все объекты активны по умолчанию
	bIsActive = true;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	RootComponent = PickupMesh;
}

// Called when the game starts or when spawned
void APickup::BeginPlay() { Super::BeginPlay(); }

// Called every frame
void APickup::Tick(float DeltaTime) { Super::Tick(DeltaTime); }

//Вовращает статус активен объект или нет
bool APickup::IsActive() { return bIsActive; } 

//Задает статус активен объект или нет
void APickup::SetActive(bool NewPickupState) { bIsActive = NewPickupState; }

void APickup::WasCollected_Implementation() 
{	
	// Выводим текста дебага в лог
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You are looted %s"), *PickupDebugString);
}
