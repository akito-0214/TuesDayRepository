#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

//HP表示
void Enemy::ShowHp()
{
	cout << "敵のHP：" << hp << endl;
}
//ダメージを受ける
void Enemy::Damage(int damage)
{
	hp -= damage;
}

//HPの取得
int Enemy::GetHp()
{
	return hp;
}