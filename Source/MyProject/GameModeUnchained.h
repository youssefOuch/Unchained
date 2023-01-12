// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnumRoom.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeUnchained.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegateRoom);

UCLASS()
class MYPROJECT_API AGameModeUnchained : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGameModeUnchained();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Mode Unchained")
	//shows the number of alive enemies
	int32 nbEnemiesAlive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Mode Unchained")
	//show actual room of the player
	Rooms currentRoom;

	UPROPERTY(BlueprintAssignable, Category = "Delegate GM Unchained")
	FDelegateRoom OnDelegateRoom1;
	UPROPERTY(BlueprintAssignable, Category = "Delegate GM Unchained")
	FDelegateRoom OnDelegateRoom2;

	UFUNCTION(BlueprintCallable)
	//use this function to not create 3 different nodes in Blueprint
	void IncrementNbEnemiesAlive();

	UFUNCTION(BlueprintCallable)
	//use this function to not create 3 different nodes in Blueprint
	void DecrementNbEnemiesAlive();

	UFUNCTION(BlueprintCallable, Category = "Delegate GMUnchained")
	//easly broadcast on Blueprint
	void CallOnDelegateRoom1();
	UFUNCTION(BlueprintCallable, Category = "Delegate GMUnchained")
	//easly broadcast on Blueprint
	void CallOnDelegateRoom2();
};
