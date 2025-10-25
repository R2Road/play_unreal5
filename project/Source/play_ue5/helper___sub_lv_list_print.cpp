// Fill out your copyright notice in the Description page of Project Settings.


#include "helper___sub_lv_list_print.h"

// Sets default values for this component's properties
Uhelper___sub_lv_list_print::Uhelper___sub_lv_list_print() : sub_level_name_list()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Uhelper___sub_lv_list_print::BeginPlay()
{
	Super::BeginPlay();

	// ...

	for( const ULevelStreaming* sub_level : GetWorld()->GetStreamingLevels() )
	{
		if( !sub_level )
		{
			continue;
		}

		sub_level_name_list.Add( sub_level->GetWorldAssetPackageName() );
	}
	
}


// Called every frame
void Uhelper___sub_lv_list_print::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

