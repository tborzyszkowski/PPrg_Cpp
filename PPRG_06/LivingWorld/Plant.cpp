#include "Plant.h"

Plant::Plant(int power, Position position) : Organism(power, position)
{
	setSpecies("P");
}

Plant::Plant() : Organism()
{
}

void Plant::move(int dx, int dy)
{
}


