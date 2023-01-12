#pragma once
#include <string>
#include "Position.h"

using namespace std;

class Organism
{
private:
	int power;
	Position position;
public:
	Organism(int power, Position position);
	Organism() : power(0), position(0, 0) {};

	int getPower();
	void setPower(int power);
	Position getPosition();
	void setPosition(Position position);

	string toString();

	virtual void move(int dx, int dy);
	virtual string species();

};