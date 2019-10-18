#pragma once

#include <simlib.h>
#include "ladyBird.h"
#include "farm.h"

class Generator : public Event
{
public:
	Generator(unsigned long amountOfLadyBirds, Farm *farm);
	
	void Behavior() override;
	
	unsigned long getAmount() const
	{ return amountOfLadybirds; }

private:
	unsigned long amountOfLadybirds;
	Farm *farm;
};