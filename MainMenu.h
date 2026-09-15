#pragma once


#include <iostream>
#include <memory>
#include <string>

#include "GameState.h"
#include "Title.h"
#include "InGame.h"

class Title;

class MainMenu :public GameState
{
public:
	void OnEnter(GameManager* manager)override;
	void OnUpdate(GameManager* manager)override;
	void OnExit(GameManager* manager)override;
	const std::string GetName()const override;
};