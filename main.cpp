#include <iostream>
#include <memory>

#include "GameManager.h"
#include "Title.h"

GameManager manager;


int main()
{
	manager.ChangeState(std::make_unique<Title>());

	while (true)
	{
		manager.Update();
	}
}