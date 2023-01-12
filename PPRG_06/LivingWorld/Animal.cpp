#include "Animal.h"

Animal::Animal(int power, Position position) : Organism(power, position)
{
}

Animal::Animal() : Organism()
{
}

string Animal::species()
{
	return "A";
}

