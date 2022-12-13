// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick.generated.h"

UCLASS()
class ARKANOID_API ABrick : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABrick();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Brick; //Ladrillo

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UBoxComponent* Collision;  //Caja Colision

	float SpeedModifierOnBounce = 1.01f;

	UFUNCTION() //Entra en la caja
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);

	void DestroyBrick();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector getBrickLocation();
};
