// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatteryCollectorGameMode.generated.h"

// Enum to store the current state of gameplay
UENUM (BlueprintType)
enum class EBatteryPlayState: uint8
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ABatteryCollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABatteryCollectorGameMode();

	virtual void Tick(float DeltaTime) override;

	// Returns power needed to win - needed for the HUD
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWin() const;

	virtual void BeginPlay() override;

	// Returns the current playing state
	UFUNCTION(BlueprintPure, Category = "Power")
	EBatteryPlayState GetCurrentState() const;

	// Set a new playing state
	UFUNCTION(BlueprintCallable, Category = "Power")
	void SetCurrentState(EBatteryPlayState NewState);

protected:
	
	// The rate at which the character loses power
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float DecayRate;

	// The power needed to win the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	float PowerToWin;

	// The widget class to use for our HUD screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	// The instance of the HUD
	UPROPERTY()
	class UUserWidget* CurrentWidget;

private:

	// Keep track of the current playing state
	EBatteryPlayState CurrentState;

	TArray<class ASpawnVolume*> SpawVolumeActors;

	// Handle any function calls that rely upon changing the play
	void HandleNewState(EBatteryPlayState NewState);
};



