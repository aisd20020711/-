#include<iostream>
#include<cstdlib>
#include<string>
#include "Player.h"
#include "Card.h"
using namespace std;
void printCard(int n)
{
	string card;
	switch (1 + n % 5)
	{
	case 1:
		cout << "黑桃";
		break;
	case 2:
		cout << "紅心";
		break;
	case 3:
		cout<<"方塊";
		break;
	case 4:
		cout<<"梅花";
	}
	switch (1 + n % 14)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout<<"J";
		break;
	case 12:
		cout<<"Q";
		break;
	case 13:
		cout<<"K";
		break;
	default:
		cout << 1 + n % 14;
	}
}
int main()
{
	int compare;
	Card card;
	Player play;
	card.shuffer();
	play.setCard(card);
	play.deal();
	int you = play.getPlayer();
	int com1 = play.getCom1();
	cout << "你的牌是:";
	printCard(you);
	cout << "\n你要比大還是比小:\n1.比大\n2.比小";
	cin >> compare;
	if (compare == 1)
	{
		if ((1 + you % 14) > (1 + com1 % 14)  )
		{
			cout << "你贏了\n";
		}
		else if ((1 + you % 14) == (1 + com1 % 14) && (1 + you % 5) < (1 + com1 % 5))
		{
			cout << "你贏了\n";
		}
		else
			cout << "你輸了\n";
	}
	else if (compare == 2)
	{
		if ((1 + you % 14) < (1 + com1 % 14))
		{
			cout << "你贏了\n";
		}
		else if ((1 + you % 14) == (1 + com1 % 14) && (1 + you % 5) > (1 + com1 % 5))
		{
			cout << "你贏了\n";
		}
		else
			cout << "你輸了\n";
	}
	cout << "對方的牌是";
	printCard(com1);
}