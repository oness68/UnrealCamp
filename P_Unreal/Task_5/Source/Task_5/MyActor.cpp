// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	UE_LOG(LogTemp, Warning, TEXT("Hello world!"));
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	CurrentPos.X = 0.f;
	CurrentPos.Y = 0.f;
	StartPos.X = 0;
	StartPos.Y = 0;
	count = 0;
	Eventcount = 0;
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	time += DeltaTime;

	if (time >= 1.0f)
	{
		move();
		UE_LOG(LogTemp, Warning, TEXT("Move Pos (%f,%f)"), MovePos.X, MovePos.Y);
		UE_LOG(LogTemp, Warning, TEXT("Current Pos(%f,%f)"), CurrentPos.X, CurrentPos.Y);
		time -= 1.0f;
		totDist += Distance(StartPos, CurrentPos);
		StartPos = CurrentPos;
		count++;

	}


	if (count >= 10)
	{
		
		int32 random = FMath::RandRange(0, 100);
		if (random > 50)
		{
			RandEvent();
			Eventcount++;
		}

		UE_LOG(LogTemp, Warning, TEXT("Distance : %f"), totDist);
		UE_LOG(LogTemp, Warning, TEXT("Event count : %d"), Eventcount);

		totDist = 0;
		count = 0;
		
	}
	
	


}

void AMyActor::move()
{
	FVector2D movevec = step();

	this->CurrentPos.X = this->CurrentPos.X + movevec.X;
	this->CurrentPos.Y = this->CurrentPos.Y + movevec.Y;

}

FVector2D AMyActor::step()
{
	MovePos.X = FMath::RandRange(-1, 1);
	MovePos.Y = FMath::RandRange(-1, 1);


	return MovePos;
}

float AMyActor::Distance(FVector2D v1, FVector2D v2)
{
	float xPow = FMath::Pow(v2.X - v1.X, 2);
	float yPow = FMath::Pow(v2.Y - v1.Y, 2);


	float result = FMath::Square(xPow+yPow);


	return result;
}

void AMyActor::RandEvent()
{
	UE_LOG(LogTemp, Warning, TEXT("Event!"));
}


