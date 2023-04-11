// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelLoader.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALevelLoader::ALevelLoader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
}

/*void UAC_LevelLoader::LoadLevel()
{
    UWorld* World = GetWorld();
    if (World)
    {
        UGameplayStatics::OpenLevel(World, FName("Level_4"));
    }
}*/



// Called when the game starts or when spawned
void ALevelLoader::BeginPlay()
{
	Super::BeginPlay();

    UWorld* World = GetWorld();
    //LevelLoader::LoadLevel();
	
}
void ALevelLoader::LoadLevel()
{
    UGameplayStatics::OpenLevelBySoftObjectPtr(this, Level);
    //UGameplayStatics::OpenLevelBySoftObjectPtr(World(), Level);
}

// Called every frame
void ALevelLoader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


