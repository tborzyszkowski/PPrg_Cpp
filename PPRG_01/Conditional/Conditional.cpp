#include <iostream>
using namespace std;

int main()
{
	//int x = 0;
	//int wynik = 0;

	//cout << "x = ";
	//cin >> x;

	//if (x < 0)
	//	wynik = -x;
	//else
	//	wynik = x;


	//cout << "abs(" << x << ") = " << wynik << endl;

	//int x = 0;
	//cout << "x = ";
	//cin >> x;

	//if (x == 0)
	//	cout << "ZERO" << endl;
	//else
	//	if ( x % 2 == 0)
	//		cout << "PARZ" << endl;
	//	else
	//		cout << "NPARZ" << endl;

	int a = 0, b = 0, c = 0;
	int min = 0;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	//if (a < b)
	//	min = a;
	//else
	//	min = b;
	//if (min > c)
	//	min = c;
	int local;
	//local = (a < b) ? a : b;
	min = ((local = ((a < b) ? a : b))) > c ? c : local;
	cout << "min = " << min << endl;

	//
	// Ex 1
	//
	//int x, y;
	//cout << "Enter two numbers" << endl;
	//cin >> x >> y;

	//cout << x << " ";
	//if (x > y)
	//{
	//	cout << "is larger than ";
	//}
	//else
	//{
	//	cout << "is not larger than ";
	//}
	//cout << y << endl;

	//if (x + y > 10)
	//	cout << "thanks for choosing larger numbers!" << endl;

	////
	//// Ex 2
	////
	//int a = 1, b = 2;

	//if (a < b)
	//	cout << "a jest < b";

	//if (a == b)
	//	cout << "a jest rowne b";

	//if (a != b)
	//	cout << "a jest rozne od b";

	////
	//// Ex 3
	////
	//int a = 13;

	//if (a == 8 || a == 10)
	//	cout << "a jest rowne 8 lub 10";
	//else
	//	cout << "a na pewno nie jest rowne 8 lub 10";

	////
	//// Ex 4
	////
	//int a = 8;

	//if (a >= 1 && a <= 10)
	//	cout << "a jest wieksze lub rowne 1 i mniejsze lub rowne 10";
	//else
	//	cout << "a jest mniejsze niz 0 lub wieksze niz 10";

	////
	//// Ex 5
	////
	//string owoc;
	//cout << "Wpisz nazwe owocu: ";
	//cin >> owoc;

	//if (owoc == "gruszka")
	//	cout << "gruszka jest zielona";
	//else
	//	if (owoc == "banan")
	//		cout << "banan jest zolty";
	//	else
	//		cout << "nie wiem jaki ma kolor";
	
	return 0;
}