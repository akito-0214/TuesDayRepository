#pragma once
#include <memory>
#include<vector>
#include "Enemy.h"
#include "ConfigTask.h"
class GameTask
{
private:
	// shared_ptrを使用して、敵オブジェクトを共有管理する
	std::vector<std::shared_ptr<EnemyTask>> enemies;
	// 敵の生成など、ゲームに必要な準備を行う
	void Init();
	// ゲーム画面を描画する
	void Draw()const;
	// 敵への攻撃処理を行う
	void Attack();
	// ゲームクリアしているかどうかを判定する
	bool IsGameClear() const;

public:
	// ゲーム全体を実行する
	void Run();
};

