// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup_M.h"

// Sets default values
APickup_M::APickup_M()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickup_M::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup_M::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickup_M::PickupRotation(UStaticMeshComponent* mesh) {
	FRotator MyRotator = FRotator(mesh->GetComponentTransform().GetRotation());
	MyRotator.Add(0.0f, -2.0f, 0.0f);

	mesh->SetWorldRotation(MyRotator);
}