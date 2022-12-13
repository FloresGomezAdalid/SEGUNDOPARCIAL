// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "LadrilloLoco.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API ALadrilloLoco : public ABrick
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ALadrilloLoco();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float velocity;
};
