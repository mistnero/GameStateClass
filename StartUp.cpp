#include "StartUp.h"
//ゲームの初期化

void StartUp::OnEnter(GameManager* manager)
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "タイトル画面" << std::endl;
}
void StartUp::OnUpdate(GameManager* manager)
{
	std::cout << std::endl;
	std::cout << "Push Any Key" << std::endl;
	std::cin.get();
	std::cout << std::endl;
}
void StartUp::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl;
}

const std::string StartUp::GetName()const
{

}