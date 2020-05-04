// im a peanut


#include "OpenDoor.h"
#include "GameFramework/Actor.h"
// #include "Math/Rotator.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// float openAngle = 110.f;
	FRotator currentAngle = GetOwner()->GetActorRotation();
	FRotator openAngle = FRotator(currentAngle.Pitch, (currentAngle.Yaw + 110.f), currentAngle.Roll);
	GetOwner()->SetActorRotation(openAngle);

	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

