// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Item.h"
#include "Components/BoxComponent.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Item Mesh"));
	RootComponent = ItemMesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("COllisonBox"));
	CollisionBox->SetupAttachment(ItemMesh);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

