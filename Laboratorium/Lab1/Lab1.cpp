// Czyta trzy d³ugoœci boków i pisze czy tworz¹ trójk¹t
//

#include <iostream>
using namespace std;

int main()
{
	//int a = 1;
	//int b = 1;
	//int c = 5;

	//if ((a + b > c) && (a + c > b) && (b + c > a))
	//	std::cout << "TAK";
	//else
	//	std::cout << "NIE";
	//std::cout << std::endl;

	//double n = 0.0;
	//int odp = 1;
	//cout << "Wpisz liczbe:";
	//cin >> n;
	//while (n > 1) {
	//	n = n / 2;
	//	cout << n << endl;
	//	odp++;
	//}
	//cout << odp;

	int min = 1;
	int max = 10;
	srand((unsigned)time(NULL));
	int random;
	random = min + (rand() % (max - min +1));
	
	int prop = 5;
	cout << "Max = " << max << ", Min = " << min << endl;
	if (prop == random)
		cout << "Success!!!";
	else
	{
		cout << "Rand: " << random << "Prop: " << prop << endl;
		if (random < prop)
		{
			max = prop - 1;
			cout << "<: Min = " << min << ", Max = " << max << endl;
		}
		else
		{
			min = prop + 1;
			cout << ">: Min = " << min << ", Max = " << max << endl;
		}
	}
	prop = (max + min) /2;
	cout << "Max = " << max << ", Min = " << min << endl;
	if (prop == random)
		cout << "Success!!!";
	else
	{
		cout << "Rand: " << random << "Prop: " << prop << endl;
		if (random < prop)
		{
			max = prop - 1;
			cout << "<: Min = " << min << ", Max = " << max << endl;
		}
		else
		{
			min = prop + 1;
			cout << ">: Min = " << min << ", Max = " << max << endl;
		}
	}
	return 0;
}
