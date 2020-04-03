// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldPosition.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	FString MyLog = TEXT("Hello world!");
	FString* MyLogPtr = &MyLog;
	// UE_LOG(LogTemp, Warning, TEXT("%s"), **MyLogPtr);

	FString OwnerName = GetOwner()->GetName();
	// UE_LOG(LogTemp, Warning, TEXT("Greetings, this is %s,"), *OwnerName);

	FString OwnerPosition = GetOwner()->GetActorLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s,"), *OwnerName, *OwnerPosition);
}

void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}