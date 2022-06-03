#include "Player.h"
int Player::cardNumber=0;
Player::Player()
{
	player = 1;
	com1 = 1;
}
void Player::deal()
{
	player = card.getCard(1);
	com1 = card.getCard(2);
}
void Player::setCard(Card c)
{
	card = c;
}
int Player::getPlayer()
{
	if (cardNumber < 0)
		return -1;
	else
	return  card.getCard(1);
}
int Player::getCom1()
{
	if (cardNumber < 0)
		return -1;
	else
	return  card.getCard(2);
}
