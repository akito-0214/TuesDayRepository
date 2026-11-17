#pragma once
class EnemyTask
{
private:
	//体力（HP）
	int hp;
public:
	// コンストラクタ
	EnemyTask();
	// デストラクタ
	~EnemyTask();
	// 敵にダメージを与える
	void Damage(int damage);
	// 現在の敵のHPを取得する
	int GetHp()const;
	// 敵が生存しているか判定する
	bool IsAlive() const;
};

