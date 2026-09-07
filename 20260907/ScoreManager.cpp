#include "ScoreManager.h"
#include<iostream>
using namespace std;

//コンストラクタ初期化
//デストラクタ（終了時）
ScoreManager::ScoreManager()
{
	currentScore = 0;
	highScore = 0;
}

//スコア加算
void ScoreManager::resetScore()
{
	currentScore = 0;
}

//ハイスコアを更新
void ScoreManager::updateHighScore()
{
	if (currentScore>highScore)
	{
		highScore = currentScore;
	}
}
//スコアの表示
void ScoreManager::displayScore()
{
	cout << "現在のスコア:" << currentScore << endl;
	cout << "ハイスコア:" << highScore << endl;
}