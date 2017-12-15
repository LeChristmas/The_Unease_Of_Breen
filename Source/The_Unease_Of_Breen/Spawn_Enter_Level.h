// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawn_Enter_Level.generated.h"

UCLASS()
class THE_UNEASE_OF_BREEN_API ASpawn_Enter_Level : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawn_Enter_Level();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> ToSpawn;

	UFUNCTION(BlueprintCallable)
	void Spawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
