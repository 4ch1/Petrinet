#pragma once

#include <simlib.h>
#include <climits>

class Farm
{
public:
	explicit Farm(unsigned long &&amountOfAcres);
	
	Store eggStore;
	Store larvaStore;
	Store secondInstarStore;
	Store thirdInstarStore;
	Store fourthInstarStore;
	Store pupalStore;
	Store readyStore;
	Store feedingStore;
	Store matingStore;
	Store deadStore;
	Store toSellStore;
	Store soldStore;
	unsigned long workingLadyBirdsAmount;
	unsigned long amountOfLadyBirds;
	
	void getFood(unsigned amount);
	
	unsigned long getExtraLadyBirds()
	{
		if (amountOfLadyBirds < amountOfAcres * 7)
			return 0;
		
		return amountOfLadyBirds - amountOfAcres * 7;
	}
	
	void printSelf();
	
	unsigned long amountOfAcres;
	
};

