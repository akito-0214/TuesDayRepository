#pragma once
class ScoreManager
{
private:
	int currentScore;//現在のスコア
	int highScore;//ハイスコア
public:
	//コンストラクタ
	ScoreManager();
	//メンバ関数
	void addPoints();
	void resetScore();
	void updateHighScore();
	void displayScore();
};

