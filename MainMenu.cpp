#include "MainMenu.h"
//１でInGame、他でTitle

void MainMenu::OnEnter(GameManager* manager)
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "メニュー画面" << std::endl;
}
void MainMenu::OnUpdate(GameManager* manager)
{
	std::cout << std::endl;
	std::cout << "Push 1 Key" << std::endl;
	char ch;
	std::cin.get(ch);
	std::cout << std::endl;
	if (ch == '1')
	{
		manager->ChangeState(std::make_unique<InGame>());
	}
	else
	{
		manager->ChangeState(std::make_unique<Title>());
	}

}
void MainMenu::OnExit(GameManager* manager)
{
	std::cout << "メニュー画面を終了" << std::endl;
}

const std::string MainMenu::GetName()const
{

}