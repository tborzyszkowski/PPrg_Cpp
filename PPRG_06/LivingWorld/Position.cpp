#include "Position.h"


Position::Position(int x, int y)
{
	setX(x);
	setY(y);
}

int Position::getX()
{
	return this->x;
}

void Position::setX(int x)
{
	if (x >= 0)
		this->x = x;
	else
		this->x = 0;
}

int Position::getY()
{
	return this->y;
}

void Position::setY(int y)
{
	if (y >= 0)
		this->y = y;
	else
		this->y = 0;
}

string Position::toString()
{
	return "(" + to_string(getX()) + ", " + to_string(getY()) + ")";
}

double Position::distance(Position position)
{
	double dx = (double)this->getX() - (double)position.getX();
	double dy = (double)this->getY() - (double)position.getY();
	return sqrt( (dx * dx) + (dy * dy) );
}

void Position::move(int dx, int dy)
{
	setX(getX() + dx);
	setY(getY() + dy);
}
