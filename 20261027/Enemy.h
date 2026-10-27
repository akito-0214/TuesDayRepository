#pragma once
class Enemy
{
private:
	int hp;
public:
	Enemy(int hp);
	void ShowHp();
	void Damage(int damage);
	int GetHp();
};

