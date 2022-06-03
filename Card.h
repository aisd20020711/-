#ifndef Card_H
#define Card_H
#include<string>
using namespace std;
class Card
{
public:
	Card();
	void setCard(int,int);
	int getCard(int)const;
	void shuffer();
private:
	int card[52];
};
#endif