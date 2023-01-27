#pragma once

#include <vector>
#include <ctime>
#include "Organism.h"

using namespace std;

class World
{
private:
	int worldX;
	int worldY;
	int turn = 0;
	vector<Organism> organisms;
	char separator = '.';

	string getOrganismFromPosition(int x, int y);
	bool isPositionOnWorld(int x, int y);
	bool isPositionFree(Position position);

public:
	World(int worldX, int worldY);
	World() : World(6, 6) {};

	int getWorldX();
	void setWorldX(int worldX);
	int getWorldY();
	void setWorldY(int worldY);

	int getTurn();
	
	void addOrganism(Organism *organism);
	vector<Position> getVectorOfFreePositionsAround(Position position);
	void makeTurn();

	void writeWorld(string fileName);
	void readWorld(string fileName);
	
	string toString();

};

