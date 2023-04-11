// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadLevel.generated.h"

UCLASS()
class FIRST_ASSIGNMENT_API ALoadLevel : public AActor
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Level Loading")
		void LoadLevel4();
	
public:	
	// Sets default values for this actor's properties
	ALoadLevel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
