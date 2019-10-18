#pragma once

#include "farm.h"

enum LifeCycle
{
	Egg, Larva, SecondInstar, ThirdInstar, FourthInstar, Pupal, Adult
};


class LadyBird : public Process
{
	void Behavior() override;

public:
	explicit LadyBird(Farm *farm, LifeCycle lifeCycle);
	
	static constexpr double timeForEgg = 2.5;
	static constexpr int foodForLarva = 35;
	static constexpr double timeForLarva = 1.5;
	static constexpr int foodForSecond = 65;
	static constexpr double timeForSecond = 3;
	static constexpr double timeForThird = 3;
	static constexpr int foodForThird = 96;
	static constexpr int foodForFourth = 296;
	static constexpr double timeForFourth = 3;
	static constexpr double timeForPupal = 6.5;
private:
	Farm *farm;
	LifeCycle cycle;
	
};
