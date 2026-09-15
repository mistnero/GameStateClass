#include "Title.h"



void Title::OnEnter(GameManager* manager)
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "タイトル画面" << std::endl;
}
void Title::OnUpdate(GameManager* manager)
{
	std::cout << std::endl;
	std::cout << "Push Any Key" << std::endl;
	std::cin.get();
	std::cout << std::endl;
	manager->ChangeState(std::make_unique<MainMenu>());
}
void Title::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl;
}

const std::string Title::GetName()const
{

}