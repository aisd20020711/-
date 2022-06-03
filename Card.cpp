#include"Card.h"
#include<iomanip>
using namespace std;
Card::Card()
{
	for (int i = 0; i < 52; i++)
	{
		card[i] = i + 1;
	}
}
void Card::setCard(int i,int c)
{
	card[i] = c;
}
int Card::getCard(int i)const
{
	return card[i];
}

void Card::shuffer()
{
	srand(time(0));
	for (int i = 0; i < 52; i++)
	{
		card[i] = rand() % 53 + 1;
	}
}