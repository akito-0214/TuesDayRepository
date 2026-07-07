#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_nagaie.h"
using namespace std;

void Array(int index)
{
	//配列
	int ary[3];
	int cpu;
	int player;
	srand((unsigned int)time(NULL));
	//cpuカード
	for (int i = 0; i < 3; i++)
	{
		ary[i] = rand() % 10;
		while (true)
		{
			if (ary[i])
			{

			}
		}
	}
	//player
	InputCheck(MIN, MAX);

	
	
}

int InputCheck(int min, int max)
{
	int num;
	cin >> num;
	while (true)
	{
		if (num<min ||num>max)
		{
			cout << "再度入力してください" << endl;
		}
		else
		{
			break;
		}
	}

	return num;
}