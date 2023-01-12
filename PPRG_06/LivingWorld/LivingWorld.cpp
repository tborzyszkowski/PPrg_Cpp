#include <iostream>
#include "Position.h"
#include "Organism.h"
#include "Plant.h"
#include "Animal.h"

using namespace std;

int main()
{
	// Position 
	Position p1;
	Position p2{ 1, 1 };
	Position p3{ -3, -5 };

	//cout << p1.toString() << endl;
	//cout << p2.toString() << endl;
	//cout << p3.toString() << endl;
	//cout << p1.distance(p2) << endl;

	// Organism
	//Organism org1;
	//Organism org2{ 10, p2 };

	//cout << org1.toString() << endl;
	//cout << org2.toString() << endl;
	//org1.move(2, 3);
	//cout << org1.toString() << endl;

	// Plant & Animal
	Plant plant{ 3, p3 };
	Animal animal{ 5, p2 };

	cout << plant.toString() << endl;
	cout << animal.toString() << endl;
	plant.move(3, 4);
	cout << plant.toString() << endl;
	animal.move(1, 2);
	cout << animal.toString() << endl;



	return 0;
}
