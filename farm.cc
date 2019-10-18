#include "farm.h"

Farm::Farm(unsigned long &&amountOfAcres) : amountOfAcres(amountOfAcres), eggStore("Egg phase", LONG_MAX),
											larvaStore("Larva phase", LONG_MAX),
											secondInstarStore("Second instar", LONG_MAX),
											thirdInstarStore("Third instar", LONG_MAX),
											fourthInstarStore("Fourth instar", LONG_MAX),
											pupalStore("Pupal phase", LONG_MAX),
											readyStore("Ready phase", LONG_MAX),
											feedingStore("Feeding", LONG_MAX), matingStore("Mating", LONG_MAX),
											deadStore("Dead", LONG_MAX), toSellStore("To sell", LONG_MAX),
											soldStore("Sold", LONG_MAX)
{
}

void Farm::getFood(unsigned amount)
{

}

void Farm::printSelf()
{
	eggStore.Output();
	larvaStore.Output();
	secondInstarStore.Output();
	thirdInstarStore.Output();
	fourthInstarStore.Output();
	pupalStore.Output();
	readyStore.Output();
	feedingStore.Output();
	matingStore.Output();
	deadStore.Output();
	toSellStore.Output();
	soldStore.Output();
}
