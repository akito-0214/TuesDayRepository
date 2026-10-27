#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

//HP•\Ž¦
void Enemy::ShowHp()
{
	cout << "“G‚ÌHPF" << hp << endl;
}