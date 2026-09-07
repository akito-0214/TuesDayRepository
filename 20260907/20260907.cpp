#include "ScoreManager.h"
#include <iostream>
using namespace std;

int main(void)
{
	//ScoreManagerクラスをオブジェクト化（インスタンス）
	ScoreManager score;

	cout << "ゲームスタート" << endl;

	score.displayScore();

	//100ポイント獲得
	cout << "100ポイント獲得しました。" << endl;

	score.addPoints(100);
	score.displayScore();
	//50ポイント獲得
	cout << "50ポイント獲得しました。" << endl;

	score.addPoints(50);
	score.displayScore();

	//ハイスコアを更新
	cout << endl;
	cout << "ハイスコア更新" << endl;

	score.updateHighScore();
	score.displayScore();

	cout << endl;
	cout << "ゲーム終了" << endl;

	score.resetScore();
	score.displayScore();


	return 0;
}