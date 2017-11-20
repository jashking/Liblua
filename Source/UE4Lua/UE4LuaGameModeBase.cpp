// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4LuaGameModeBase.h"

#include "lua.hpp"

AUE4LuaGameModeBase::AUE4LuaGameModeBase()
{

}

AUE4LuaGameModeBase::~AUE4LuaGameModeBase()
{

}

void AUE4LuaGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	lua_State* L = luaL_newstate();
}

void AUE4LuaGameModeBase::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}
