#include<iostream>
#include<vector>
#include"Enemy.h"
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));

	vector<Enemy>enemies;
	
	//
	for (int i = 0; i < 3; i++)
	{
		int hp = rand() % 71 + 30;
		enemies.push_back(Enemy(hp));
	}
	for (int i = 0; i < enemies.size(); i++)
	{
		enemies[i].ShowHp();
	}



    return 0;
}