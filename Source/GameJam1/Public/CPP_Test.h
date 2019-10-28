// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Test.generated.h"

UCLASS()
class GAMEJAM1_API ACPP_Test : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Test();

public:
	//TEST for addition.
	UFUNCTION(BlueprintCallable, Category = "Test|Functions")
		int Sum(int iValueOne, int iValueTwo);

	//TEST for attributes.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test|Attributes")
		int iValueOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test|Attributes")
		int iValueTwo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
