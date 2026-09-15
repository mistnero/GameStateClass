#pragma once
#include <iostream>
#include <memory>

class GameState;

class GameManager
{
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float gameTime;
public:
	
	GameManager():isRunning(true),gameTime(0.0f){}
	void ChangeState(std::unique_ptr<GameState> newState)
	{

		currentState->OnExit(this);
		currentState = std::move(newState);
		currentState->OnEnter(this);
	}
	void Update()
	{
		currentState->OnUpdate(this);
	}
};
