// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Brick.h"
#include "ArkanoidGameModeBase.generated.h"
/**
 * 
 */
UCLASS()
class ARKANOID_API AArkanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
private:
	//The Inventory of this Actor
	/*UPROPERTY()
		class APaddle* Paddle;*/
public:
	ABrick* Brick;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
