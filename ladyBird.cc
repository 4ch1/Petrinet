#include <iostream>
#include "ladyBird.h"

void LadyBird::Behavior()
{
	if (cycle == Egg)
	{
		Enter(farm->eggStore);
		Wait(Exponential(timeForEgg));
		Leave(farm->eggStore);
		
		cycle = Larva;
		Enter(farm->larvaStore);
		farm->getFood(foodForLarva * 10000);
		Wait(Exponential(timeForLarva));
		Leave(farm->larvaStore);
		
		cycle = SecondInstar;
		Enter(farm->secondInstarStore);
		farm->getFood(foodForSecond * 10000);
		Wait(Exponential(timeForSecond));
		Leave(farm->secondInstarStore);
		
		cycle = ThirdInstar;
		Enter(farm->thirdInstarStore);
		farm->getFood(foodForThird * 10000);
		Wait(Exponential(timeForThird));
		Leave(farm->thirdInstarStore);
		
		cycle = FourthInstar;
		Enter(farm->fourthInstarStore);
		farm->getFood(foodForFourth * 10000);
		Wait(Exponential(timeForFourth));
		Leave(farm->fourthInstarStore);
		
		cycle = Pupal;
		Enter(farm->pupalStore);
		Wait(Exponential(timeForPupal));
		Leave(farm->pupalStore);
		
		cycle = Adult;
	}
	if (cycle == Adult)
	{
		farm->workingLadyBirdsAmount++;
		
		
		Enter(farm->readyStore);
		
		Leave(farm->readyStore);
		
		if (farm->getExtraLadyBirds() != 0)
		{
			farm->workingLadyBirdsAmount--;
			farm->amountOfLadyBirds--;
			Enter(farm->toSellStore);
			Leave(farm->toSellStore);
			
			Enter(farm->soldStore);
			return;
		} else
		{
			Enter(farm->feedingStore);
			Leave(farm->feedingStore);
			
			Enter(farm->matingStore);
			if (Random() > 0.5)
			{
				for (int i = 0; i < 7; i++)
					(new LadyBird(farm, Egg))->Activate();
				
				farm->amountOfLadyBirds += 7;
				
			}
			Leave(farm->matingStore);
		}
		
		Enter(farm->deadStore);
		farm->workingLadyBirdsAmount--;
		farm->amountOfLadyBirds--;
	}
	
}

LadyBird::LadyBird(Farm *farm, LifeCycle cycle) : farm(farm), cycle(cycle)
{

}
