// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeUnchained.h"

AGameModeUnchained::AGameModeUnchained()
	:Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void AGameModeUnchained::IncrementNbEnemiesAlive()
{
	nbEnemiesAlive++;
}

void AGameModeUnchained::DecrementNbEnemiesAlive()
{
	nbEnemiesAlive--;
}

void AGameModeUnchained::CallOnDelegateRoom1()
{
	OnDelegateRoom1.Broadcast();
	currentRoom = Rooms::Room1;
}

void AGameModeUnchained::CallOnDelegateRoom2()
{
	OnDelegateRoom2.Broadcast();
	currentRoom = Rooms::Room2;
}
