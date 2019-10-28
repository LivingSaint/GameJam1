// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_Test.h"

// Sets default values
ACPP_Test::ACPP_Test()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	iValueOne = 2;
	iValueTwo = 2;


}

int ACPP_Test::Sum(int iValueOne, int iValueTwo)
{
	int iSum = 0;
	iSum = iValueOne + iValueTwo;
	return iSum;
}

// Called when the game starts or when spawned
void ACPP_Test::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ACPP_Test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if ((iValueOne != 2) || (iValueTwo != 2)) {
		iValueOne = 2;
		iValueTwo = 2;
	} else {
		iValueOne = 12;
		iValueTwo = 12;
	}

}

