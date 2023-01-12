#include "Plant.h"

Plant::Plant(int power, Position position) : Organism(power, position)
{
}

Plant::Plant() : Organism()
{
}

void Plant::move(int dx, int dy)
{
}

string Plant::species()
{
	return "P";
}

