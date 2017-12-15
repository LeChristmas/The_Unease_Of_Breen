// Fill out your copyright notice in the Description page of Project Settings.

#include "Spawn_Enter_Level.h"
#include "Runtime/Engine/Classes/Engine/World.h"


// Sets default values
ASpawn_Enter_Level::ASpawn_Enter_Level()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawn_Enter_Level::BeginPlay()
{
	Super::BeginPlay();
	
	Spawn();
}

// Called every frame
void ASpawn_Enter_Level::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawn_Enter_Level::Spawn()
{
	if (ToSpawn)
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;

			FRotator rotator;

			FVector spawnlocation = this->GetActorLocation();

			world->SpawnActor<AActor>(ToSpawn, spawnlocation, rotator, spawnParams);
		}
	}
}

