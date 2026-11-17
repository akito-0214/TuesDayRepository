#include "Enemy.h"
#include "ConfigTask.h"
// 敵のHPを設定ファイルで定義された初期HPで初期化する
EnemyTask::EnemyTask() :hp(ConfigTask::ENEMY_HP) {}
// 敵オブジェクトが破棄されるときに呼び出される
EnemyTask::~EnemyTask() {}


void EnemyTask::Damage(int damage)
{
	// 指定されたダメージ分だけHPを減らす
	hp -= damage;
	// HPが0未満にならないように制限する
	if (hp < 0)
	{
		hp = 0;
	}
}

int EnemyTask::GetHp() const
{
	return hp;
}
// HPが0より大きければtrue、0以下ならfalseを返す
bool EnemyTask::IsAlive() const
{
	return hp > 0;
}