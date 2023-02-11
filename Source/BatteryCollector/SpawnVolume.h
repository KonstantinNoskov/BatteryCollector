// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ASpawnVolume();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
		
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// ���������� ����� ������
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; }

	//���������� ��������� ����� ������
	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetRandomPoint();

	// This function toogles whether or not the spawn volume spawns pickups
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SetSpawnActive(bool bShouldSpawn);

protected:
	// ������ ������� �� ����� ��������
	UPROPERTY(EditAnyWhere, Category = "Spawning")
	TSubclassOf<class APickup> WhatToSpawn;
	
	// ������ ������
	FTimerHandle SpawnTimer;

	// ����������� �������� ������
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeLow;

	// ������������ �������� ������
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeHigh;
		
private:

	// ���� ������
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* WhereToSpawn;

	void SpawnPickup();

	// ������� ��������� ������
	float SpawnDelay;

	bool bShouldActive;
};
