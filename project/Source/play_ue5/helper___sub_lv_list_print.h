// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "helper___sub_lv_list_print.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAY_UE5_API Uhelper___sub_lv_list_print : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Uhelper___sub_lv_list_print();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "SubLevelHelper" )
	TArray<FString> sub_level_name_list;
};
