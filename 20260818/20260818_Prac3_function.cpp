#include<iostream>
#include"Card.h"

using namespace std;

int main()
{
	int ary[TOTAL_CARD];
	createCard(ary);
	for (int i = 0; i < TOTAL_CARD; i++)
	{
		cout << ary[i];

	}

	shuffleCard(ary);

	showCard(ary);
}



