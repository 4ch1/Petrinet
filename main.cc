#include <iostream>
#include <simlib.h>
#include "generator.h"

Farm *farm = nullptr;

void printResults(Farm *pFarm, const Generator &generator);

int main(int argc, char **argv)
{
	Init(0, std::strtod(argv[3], nullptr));
	farm = new Farm(std::strtoul(argv[1], nullptr, 10));
	Generator generator(std::strtoul(argv[2], nullptr, 10), farm);
	generator.Activate();
	Run();
	printResults(farm, generator);
}

void printResults(Farm *pFarm, const Generator &generator)
{
	double spentMoney = static_cast<double>(generator.getAmount()) * 13.8;
	double gainedMoney = static_cast<double>(pFarm->soldStore.Used()) * 12.7;
	double savedMoney = 0;
	unsigned long usefulLadyBirds = pFarm->amountOfAcres * 7;
	
	if (usefulLadyBirds >= pFarm->amountOfLadyBirds)
		savedMoney = (pFarm->amountOfLadyBirds / 7) * 66;
	else
		savedMoney = usefulLadyBirds * 66;
	
	std::cout << "RESULTS" << std::endl;
	std::cout << "Current amount of ladybirds: " << pFarm->amountOfLadyBirds << std::endl;
	std::cout << "Net profit in $: " << gainedMoney - spentMoney + savedMoney << std::endl;
}