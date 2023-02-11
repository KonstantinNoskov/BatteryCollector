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

	// ���������� ��� ������� pickup
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }

	// ���������� ������� Pickup ��� ���
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();

	// ��������� ������ ������� ������ ������ "����������" pickup-�������
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);

	//�������� ������ ��� �������� �������
	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();
	
	virtual void WasCollected_Implementation();
	
protected:

	// True ���� ����� ������������, false ���� ������ ���������
	bool bIsActive;
		
private:

	// ��� ������ ������� ������� ����� ������������ �� ������ 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickupMesh;

};
