// Fill out your copyright notice in the Description page of Project Settings.

#include "CauldronPickup.h"

// Sets default values for this actor's properties
ACauldronPickup::ACauldronPickup() {

	GetMesh()->SetSimulatePhysics(true);

	// the base power level of the battery
	BatteryPower = 150.f;

	
}

void ACauldronPickup::WasCollected_Implementation()
{
	// Use the base pickup behavior
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}

float ACauldronPickup::GetPower()
{
	return BatteryPower;
}