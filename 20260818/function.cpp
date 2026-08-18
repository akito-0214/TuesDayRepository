#include<iostream>
#include"ƒwƒbƒ_[.h"
using namespace std;


void Damege(int *p)
{
	*p -= 20;
	cout << "20HPŒ¸‚è‚Ü‚µ‚½";
}

void Heal(int *p)
{
	*p += 30;
	cout << "30HP‰ñ•œ‚µ‚Ü‚µ‚½";
}