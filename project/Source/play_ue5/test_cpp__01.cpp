// Fill out your copyright notice in the Description page of Project Settings.


#include "test_cpp__01.h"

// Sets default values for this component's properties
Utest_cpp__01::Utest_cpp__01()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Utest_cpp__01::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Utest_cpp__01::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

