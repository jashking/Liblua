// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE4LuaGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE4LUA_API AUE4LuaGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AUE4LuaGameModeBase();
	virtual ~AUE4LuaGameModeBase();

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	
};
