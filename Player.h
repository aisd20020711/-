#ifndef Player_H
#define Player_H
#include "Card.h"
class Player
{
public:
	Player();
	void deal();
	void setCard(Card);
	int getPlayer();
	int getCom1();
private:
	Card card;
	static int cardNumber;
	int player;
	int com1;
};
#endif