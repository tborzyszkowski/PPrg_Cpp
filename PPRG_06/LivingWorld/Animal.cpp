#include "Animal.h"

Animal::Animal(int power, Position position) : Organism(power, position)
{
	setSpecies("A");
}

Animal::Animal() : Organism()
{
	setSpecies("A");
}


