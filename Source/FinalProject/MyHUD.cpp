// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"

void AMyHUD::DrawHUD() {
	FString string = FString("Score: ") + FString::FromInt(AAsteroid::asteroidScore);
	DrawText(string, FLinearColor(1, 1, 1, 1), 0, 0, nullptr, 3);
	string = FString("Shots Fired: ") + FString::FromInt(AFinalProjectPawn::shotsFired);
	DrawText(string, FLinearColor(1, 1, 1, 1), 0, 30, nullptr, 3);
	string = FString("Percent Accuracy: ") + FString::FromInt(int(float(AAsteroid::asteroidScore)/AFinalProjectPawn::shotsFired*100)) + FString("%");
	DrawText(string, FLinearColor(1, 1, 1, 1), 0, 60, nullptr, 3);
}