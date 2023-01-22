#pragma once
#include <string>
#include "Position.h"

using namespace std;

class Organism
{
private:
	int power;
	Position position;
	string species;
public:
	Organism(int power, Position position);
	Organism() : power(0), position(0, 0), species("O") {};

	int getPower();
	void setPower(int power);
	Position getPosition();
	void setPosition(Position position);
	string getSpecies();
	void setSpecies(string spec);

	string toString();

	virtual void move(int dx, int dy);

};