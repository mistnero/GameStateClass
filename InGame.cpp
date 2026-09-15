#include "InGame.h"
//EnterƒL[‚Å‚P`‚P‚Oƒ‰ƒ“ƒ_ƒ€’Š‘IA‚P‚ªo‚½‚çResult‚Ö

void InGame::OnEnter(GameManager* manager)
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "ƒQ[ƒ€‰æ–Ê" << std::endl;
}
void InGame::OnUpdate(GameManager* manager)
{
	std::cout << std::endl;
	std::cout << "Push Any Key" << std::endl;
	std::cin.get();
	std::cout << std::endl;
}
void InGame::OnExit(GameManager* manager)
{
	std::cout << "ƒQ[ƒ€‰æ–Ê‚ğI—¹" << std::endl;
}

const std::string InGame::GetName()const
{

}