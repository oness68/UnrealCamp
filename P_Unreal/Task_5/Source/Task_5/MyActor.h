// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MyActor.generated.h"


UCLASS()
class TASK_5_API AMyActor : public AActor
{

	GENERATED_BODY()
	

private:
	FVector2D CurrentPos;
	FVector2D MovePos;
	FVector2D StartPos;
	float time;
	float totDist;
	int32_t count;
	int32_t Eventcount;

public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	void move();
	FVector2D step();
	float Distance(FVector2D v1,FVector2D v2);
	void RandEvent();
};
