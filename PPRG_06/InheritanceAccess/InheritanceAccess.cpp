#include <iostream>
#include "PublicDerived.h"
#include "ProtectedDerived.h"
#include "PrivateDerived.h"

using namespace std;

int main()
{
	PublicDerived object1;
	cout << "Private = " << object1.getPVT() << endl;
	cout << "Protected = " << object1.getProt() << endl;
	cout << "Public = " << object1.pub << endl;

	ProtectedDerived object2;
	cout << "Private cannot be accessed." << endl;
	cout << "Protected = " << object2.getProt() << endl;
	cout << "Public = " << object2.getPub() << endl;

	PrivateDerived object3;
	cout << "Private cannot be accessed." << endl;
	cout << "Protected = " << object3.getProt() << endl;
	cout << "Public = " << object3.getPub() << endl;
	return 0;
}
