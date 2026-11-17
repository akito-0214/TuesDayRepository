#include "Game.h"
#include<iostream>
#include<limits>
#include"ConfigTask.h"

void GameTask::Init()
{
	// 設定された敵の数だけ敵オブジェクトを生成する
	for (int i = 0; i < ConfigTask::ENEMY_COUNT; i++)
	{
		enemies.push_back(std::make_shared<EnemyTask>());
	}
}

void GameTask::Draw() const
{
	// 敵の一覧を表示する
	std::cout << "敵:\n";
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i]->IsAlive())
		{
			std::cout << "敵" << i + 1 << "HP:"
				<< enemies[i]->GetHp() << "\n";
		}
		else
		{
			std::cout << "撃破済み\n";
		}
	}
}

void GameTask::Attack()
{
	int target;
	std::cout << "攻撃する敵を選択してください。(1～3)\n";
	// 入力された値が数字かどうかを確認する
	if (!(std::cin >> target))
	{
		std::cout << "数字を入力してください\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return;

	}

	if (target < 1 || target > ConfigTask::ENEMY_COUNT)
	{
		std::cout << "入力した数字は選択出来ません。再度入力してください。\n";
		return;
	}

	std::shared_ptr<EnemyTask> targetEnemy = enemies[target - 1];

	if (!targetEnemy->IsAlive())
	{
		std::cout << "この敵はすでに倒されています。\n";
		return;
	}

	std::cout << "攻撃する敵は、" << target << "\n";

	targetEnemy->Damage(ConfigTask::DAMEGE);
	std::cout << "敵" << target << "に戦闘ダメージ"
		<< ConfigTask::DAMEGE << "を与えました。\n";

}

bool GameTask::IsGameClear() const
{
	// すべての敵の生存状態を確認する
	for (const auto& enemy : enemies)
	{
		// 生存している敵が1体でもいる場合
		if (enemy->IsAlive())
		{
			return false;
		}
	}

	return true;
}

// ゲーム全体の進行を管理する
void GameTask::Run()
{
	// ゲーム開始時の初期化処理を行う
	Init();

	// ゲームが終了するまで繰り返す
	while (true)
	{
		// 現在の敵の状態を画面に表示する
		Draw();

		// プレイヤーの攻撃処理を行う
		Attack();

		// すべての敵を倒したか確認する
		if (IsGameClear())
		{
			std::cout << "GamerClear\n";
			break;
		}
	}
}