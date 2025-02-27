// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SteamVRPawn.generated.h"

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class VIVETRACKING_V01_API ASteamVRPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASteamVRPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	float AngleOffsetCorrector(float InAngle);
	
};



USTRUCT(BlueprintType)
struct FTrackerDataStruct
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Data Struct")
		float timestamp;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Data Struct")
			FVector Position;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Data Struct")
			FVector LinearVelocity;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Data Struct")
			FVector LinearAcceleration;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Data Struct")
			FRotator Orientation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Data Struct")
			FRotator AngularVelocity;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Data Struct")
			FRotator AngularAcceleration;
};
