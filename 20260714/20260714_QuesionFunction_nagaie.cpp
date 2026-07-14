#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_nagaie.h"
using namespace std;
//球種の設定
void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}

void Result(int out)
{
    //勝敗の判定
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}

int InputCheck(int min, int max)
{
    int player;

    while (true)
    {
        cin >> player;
        //入力チェック
        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}