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
	
	//3体の登録
	for (int i = 0; i < 3; i++)
	{
		int hp = rand() % 71 + 30;
		enemies.push_back(Enemy(hp));
	}
	for (int i = 0; i < enemies.size(); i++)
	{
		cout << i + 1 << "体目";
		enemies[i].ShowHp();
	}

	int target;
	cout << "敵を選択してください";
	cin >> target;




	if (target<1||target>(int)enemies.size())
	{
		cout << "無効な数です";
		return 0;
	}

	//
	int damage = rand() % 71 + 20;
	cout << damage << "ダメージ！";
	//
	enemies[target - 1].Damage(damage);
	// ダメージ後のHPを表示
	for (int i = 0; i < enemies.size(); i++)
	{
		cout << i + 1 << "体目 ";
		enemies[i].ShowHp();
	}

	// HPが0以下の敵を削除
	for (int i = (int)enemies.size() - 1; i >= 0; i--)
	{
		if (enemies[i].GetHp() <= 0)
		{
			enemies.erase(enemies.begin() + i);
		}
	}

	// 削除後のHPを表示
	for (int i = 0; i < enemies.size(); i++)
	{
		cout << i + 1 << "体目 ";
		enemies[i].ShowHp();
	}

	// 残った敵の数を表示
	cout << "残った敵の数：" << enemies.size() << "体" << endl;

    return 0;
}