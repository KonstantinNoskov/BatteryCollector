// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/BoxComponent.h"
#include "Pickup.h"
#include "SpawnVolume.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ASpawnVolume::ASpawnVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//������� ���� ��� ����������� ������ ������
	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>("WhereToSpawn");
	WhereToSpawn->SetupAttachment(RootComponent);

	//������ �������� �������� ����� �������
	SpawnDelayRangeLow = 1.0f;
	SpawnDelayRangeHigh = 4.5f;
}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ASpawnVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector ASpawnVolume::GetRandomPoint()
{
	FVector SpawnOrigin = WhereToSpawn->Bounds.Origin;
	FVector SpawnExtent = WhereToSpawn->Bounds.BoxExtent;

	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent);
}


void ASpawnVolume::SetSpawnActive(bool bShouldSpawn) 
{
	if (bShouldSpawn) 
	{
		// Set the time on spawn Pickup
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
	}

	else 
	{
		// clear the timer on Spawn Pickup
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}

}

void ASpawnVolume::SpawnPickup() 
{
	// ���� ��� ���������� ������ ��� ������
	if (WhatToSpawn != NULL) 
	{
		// ��������� ������������ �� ���������� 
		UWorld* const World = GetWorld();
		if (World) 
		{
			// ������������� ��������� ������
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			// �������� ��������� ����� ��� ������
			FVector SpawnLocation = GetRandomPoint();

			// ������ ��������� ��������� �������� ��� ������, ����� ��������� ��������������
			FRotator SpawnRotation;
			SpawnRotation.Yaw = FMath::FRand() * 360.0f;
			SpawnRotation.Pitch = FMath::FRand() * 360.0f;
			SpawnRotation.Roll = FMath::FRand() * 360.0f;
			
			// ������� ������
			APickup* const SpawnedPickup = World->SpawnActor<APickup>(WhatToSpawn, SpawnLocation, SpawnRotation, SpawnParams);

			// ��������� ����� ����� ��������� ������� ������ 
			SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
		}
	}
}