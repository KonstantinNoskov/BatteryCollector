// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Возвращает меш объекта pickup
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }

	// Возвращает активен Pickup или нет
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();

	// Позволяет другим классам менять статус "активности" pickup-объекта
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);

	//Вызываем логику при поднятии объекта
	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();
	
	virtual void WasCollected_Implementation();
	
protected:

	// True если можно использовать, false если объект неактивен
	bool bIsActive;
		
private:

	// Меш нашего объекта который будет отображаться на уровне 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickupMesh;

};
