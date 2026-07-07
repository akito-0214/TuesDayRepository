#include<iostream>

using namespace std;

void Array(int ary[], int index);

int main(void)
{
	//”z—ñ
	int ary[10];
	int even=0;
	int odd = 0;

	Array(ary,10);
	for (int i = 0; i < 10; i++)
	{
		if (0 == ary[i] % 2)
		{
			cout << ary[i] << "‚Í‹ô”‚Å‚·" << endl;
		}
		else
		{
			cout << ary[i] << "‚ÍŠï”‚Å‚·" << endl;
		}
	}
}

void Array(int ary[], int index)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
		cout << i + 1 << "‰ñ–Ú" << endl;
		cin >> ary[i];
	}
}