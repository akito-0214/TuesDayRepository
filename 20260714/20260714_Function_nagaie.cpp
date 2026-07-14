#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_nagaie.h"
using namespace std;

int InputCheck(int max, int min)
{
	int player;

	while (true)
	{
		if (player<CARD_MIN || player>CARD_MAX)
		{
			cout << "“ü—Í‚µ‚½”‚ªˆá‚¢‚Ü‚·Ä“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
		}
		else
		{
			break;
		}
	}
	return player;
}


void Game()
{
	//•Ï”éŒ¾
	int ary[10];
	int player;
	int cpu;
	int card = 0;
	int WIN = 0;
	int LOSES = 0;
	int DRAW = 0;
	int point = 0;

	player = InputCheck(CARD_MAX, CARD_MIN);
	//
	
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));
	//ƒQ[ƒ€ƒ‹[ƒv
	while (ROUND)
	{
		//ƒ‰ƒ“ƒ_ƒ€¶¬
		for (int i = 0; i < 10; i++)
		{
			ary[10];
			ary[i] = rand() % 51;
		}
		cin >> player;
		cout << "player‚Í‚P`‚P‚O‚Ì’†‚©‚ç‘I‚ñ‚Å‚­‚¾‚³‚¢\n";

	



		//”»’è
		if (player < cpu)
		{
			cout << WIN_POINT<<"cpu‚É‚R“_I" << endl;
			LOSES++;
		}
		else if (player == cpu)
		{
			cout <<DRAW_POINT<< "—¼•û‚É‚P“_‚¸‚Â" << endl;
			DRAW++;
		}
		else
		{
			cout << WIN_POINT<<"player‚É‚R“_‚â[[I" << endl;
			WIN++;
		}
	}



	
}


