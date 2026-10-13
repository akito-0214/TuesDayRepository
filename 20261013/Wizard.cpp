#include "Wizard.h"
#include<iostream>
#include"BattleManager.h"
#include"Boss.h"
#include"Enemy.h"
#include"Player.h"
int main(void)
{
	//
	Player player("勇者ヨシヒコ");
	Wizard wizard("魔法使いメレブ");
	Enemy enemy("スライム");
	Boss boss("魔王");
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&wizard);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);

	return 0;
}
