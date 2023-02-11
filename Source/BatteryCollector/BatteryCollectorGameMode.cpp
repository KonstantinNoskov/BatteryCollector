// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorGameMode.h"
#include "BatteryCollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "BatteryCollectorCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "SpawnVolume.h"
//#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/PawnMovementComponent.h"


ABatteryCollectorGameMode::ABatteryCollectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	} 

	PrimaryActorTick.bCanEverTick = true;

	// Base decay rate
	DecayRate = 0.01f;
}

void ABatteryCollectorGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Find all spawn volume actors
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);

	for (auto Actor : FoundActors)
	{
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor)
		{
			SpawVolumeActors.AddUnique(SpawnVolumeActor);
		}
	}

	SetCurrentState(EBatteryPlayState::EPlaying);

	// Set the score to beat
	ABatteryCollectorCharacter* MyCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{	

		PowerToWin = (MyCharacter->GetInitialPower()) * 1.25f;
	}

	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ABatteryCollectorGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Check that we are using the battery collector character
	ABatteryCollectorCharacter* MyCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{	
		// If our power is greater than needed to win, set the game's state to Won
		if (MyCharacter->GetCurrentPower() > PowerToWin)
		{
			SetCurrentState(EBatteryPlayState::EWon);
		}

		// If the character's power is positive...
		else if (MyCharacter->GetCurrentPower() > 0)
		{	
			// ...decrease the character's power using the decay rate
			MyCharacter->UpdatePower(-DeltaTime*DecayRate* (MyCharacter->GetInitialPower()));
		}

		// If power is lesser than 0, set game's state to GameOver
		else
		{
			SetCurrentState(EBatteryPlayState::EGameOver);
		}
	}

	
}

float ABatteryCollectorGameMode::GetPowerToWin() const { return PowerToWin; }

EBatteryPlayState ABatteryCollectorGameMode::GetCurrentState() const 
{ 
	return CurrentState; 
}

void ABatteryCollectorGameMode::SetCurrentState(EBatteryPlayState NewState) 
{ 
	CurrentState = NewState; 

	HandleNewState(CurrentState);
}

void ABatteryCollectorGameMode::HandleNewState(EBatteryPlayState NewState)
{
	switch (NewState) {
		
		// If the game is playing
		case EBatteryPlayState::EPlaying:
		{
			// Spawn volumes active
			for (ASpawnVolume* Volume : SpawVolumeActors){ Volume->SetSpawnActive(true); }
		}
		break;

		// If we've won the game
		case EBatteryPlayState::EWon:
		{
			// Spawn volumes inactive
			for (ASpawnVolume* Volume : SpawVolumeActors) { Volume->SetSpawnActive(false); }

			//Block player input
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
			if (PlayerController)
			{
				PlayerController->SetCinematicMode(true, false, false, true, false);
			}
		}
		break;
	
		// If we've lost the game
		case EBatteryPlayState::EGameOver:
		{
			// Spawn volumes inactive
			for (ASpawnVolume* Volume : SpawVolumeActors) 
			{ 
				Volume->SetSpawnActive(false); 
			}

			//Block player input
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
			if (PlayerController)
			{
				PlayerController->SetCinematicMode(true, false, true, true, false);
			}

			// Ragdoll the character
			ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
			if (MyCharacter)
			{
				MyCharacter->GetMesh()->SetSimulatePhysics(true);
				MyCharacter->GetMovementComponent()->MovementState.bCanJump = false;
				
			}
		}
		break;

		default:
		case EBatteryPlayState::EUnknown:
		{
			//do nothing
		}
	}
}