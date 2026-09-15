#pragma once

#include <iostream>
#include <memory>
#include <string>

#include "GameManager.h"

class GameState
{
	std::unique_ptr<GameState> next_state;
public:
	virtual ~GameState() = default;
	virtual void OnEnter(GameManager* manager) = 0;
	virtual void OnUpdate(GameManager* manager) = 0;
	virtual void OnExit(GameManager* manager) = 0;
	virtual const std::string GetName() const = 0;
};