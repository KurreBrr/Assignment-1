// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelLoader.generated.h"

UCLASS()
class FIRST_ASSIGNMENT_API ALevelLoader : public AActor
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		void LoadLevel();
	
public:	
	// Sets default values for this actor's properties
	ALevelLoader();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSoftObjectPtr<UWorld> Level;

	//UGameplayStatics::OpenLevel(GetWorld(), "Level_4");


};
