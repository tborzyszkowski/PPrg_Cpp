#include "Organism.h"

Organism::Organism(int power, Position position)
{
	setPower(power);
	setPosition(position);
}

int Organism::getPower()
{
	return this->power;
}

void Organism::setPower(int power)
{
	this->power = power;
}

Position Organism::getPosition()
{
	return this->position;
}

void Organism::setPosition(Position position)
{
	this->position = position;
}

string Organism::toString()
{
	return "{ species: " + species() + 
		", power: " + to_string(getPower()) + 
		", position: " + getPosition().toString() + "}";
}

void Organism::move(int dx, int dy)
{
	position.move(getPosition().getX() + dx, getPosition().getY() + dy);
}

string Organism::species()
{
	return "O";
}
