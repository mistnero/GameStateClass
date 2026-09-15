#include "Result.h"
//InGameの結果
//AnyKeyでMainMenuへ

void Result::OnEnter(GameManager* manager)
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "タイトル画面" << std::endl;
}
void Result::OnUpdate(GameManager* manager)
{
	std::cout << std::endl;
	std::cout << "Push Any Key" << std::endl;
	std::cin.get();
	std::cout << std::endl;
}
void Result::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl;
}

const std::string Result::GetName()const
{

}