#include "generator.h"

void Generator::Behavior()
{
	for (int i = 0; i < amountOfLadybirds; i++)
		(new LadyBird(farm, Adult))->Activate();
	
	farm->amountOfLadyBirds += amountOfLadybirds;
}

Generator::Generator(unsigned long amountOfLadyBirds, Farm *farm) : amountOfLadybirds(amountOfLadyBirds),
																	farm(farm)
{
}
