#pragma once

#include <iostream>
#include <memory>

#include "GameState.h"
#include "MainMenu.h"

class Title :public GameState
{
public:
	void OnEnter(GameManager* manager)override;
	void OnUpdate(GameManager* manager)override;
	void OnExit(GameManager* manager)override;
	const std::string GetName()const override;
};
