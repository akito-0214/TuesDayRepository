#include"ƒwƒbƒ_[.h"
#include<iostream>
using namespace std;

int main()
{
	int HP= 100;
	int* p = &HP;
	Damege(&HP);
	cout << "HP:" << HP<<"\n";
	Heal(&HP);
	cout << "HP:" << HP << "\n";

	cout << "Œ»İ‚ÌHP:"<<HP << endl;
}