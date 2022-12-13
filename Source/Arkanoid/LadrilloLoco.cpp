// Fill out your copyright notice in the Description page of Project Settings.


#include "LadrilloLoco.h"

ALadrilloLoco::ALadrilloLoco()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	velocity = 1;
}

void ALadrilloLoco::BeginPlay()
{
	Super::BeginPlay();
}

void ALadrilloLoco::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector MoveDirection = FVector (FMath::RandRange(-70, 70), 0.0f, FMath::RandRange(-100, 100));
	const FVector Movement = MoveDirection * velocity * DeltaTime;
	RootComponent->MoveComponent(Movement, FRotator::ZeroRotator, true);

}
