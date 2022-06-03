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
		cout << "�®�";
		break;
	case 2:
		cout << "����";
		break;
	case 3:
		cout<<"���";
		break;
	case 4:
		cout<<"����";
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
	cout << "�A���P�O:";
	printCard(you);
	cout << "\n�A�n��j�٬O��p:\n1.��j\n2.��p";
	cin >> compare;
	if (compare == 1)
	{
		if ((1 + you % 14) > (1 + com1 % 14)  )
		{
			cout << "�AĹ�F\n";
		}
		else if ((1 + you % 14) == (1 + com1 % 14) && (1 + you % 5) < (1 + com1 % 5))
		{
			cout << "�AĹ�F\n";
		}
		else
			cout << "�A��F\n";
	}
	else if (compare == 2)
	{
		if ((1 + you % 14) < (1 + com1 % 14))
		{
			cout << "�AĹ�F\n";
		}
		else if ((1 + you % 14) == (1 + com1 % 14) && (1 + you % 5) > (1 + com1 % 5))
		{
			cout << "�AĹ�F\n";
		}
		else
			cout << "�A��F\n";
	}
	cout << "��誺�P�O";
	printCard(com1);
}