#pragma once
//定数
//ピッチャーの球種の数
const int PITCHING_MIN = 0;
const int PITCHING_MAX = 3;
//確率
const int PROBABILITY = 4;
//ストライクのカウント
const int STRIKE_COUNT = 3;
//ボールのカウント
const int BALL_COUNT = 4;
//アウトのカウント
const int OUT_COUNT = 3;
//ヒットカウント
const int HIT_COUNT = 4;

//球種
enum PitchType
{
	Straight,
	Curve,
	Slider,
	Sinker
};
//ピッチャーの球種
void PitchingType(int pitching);
//勝敗
void Result(int out);
//入力チェック
int InputCheck(int min, int max);

