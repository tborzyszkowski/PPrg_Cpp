#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	//// Suma 1 .. N
	//// 
	//const int N = 10;

	//int result(0);

	//for (int i = 0; i < N; ++i) {
	//	result += i;
	//}

	//cout << "Suma 1 .. " << N << " = " << result << endl;


	//// Suma 1 .. N
	//// wersja z p�tl� while
	////
	//const int N = 10;

	//int result = 0;
	//int i = 0;

	//while (i < N) {
	//	result += i;
	//	i++;
	//}

	//cout << "Suma 1 .. " << N << " = " << result << endl;

	//
	// Scopes
	//
	//int x = 10;
	//cout << "(1) x = " << x << endl;
	//{
	//	int x = 20;
	//	cout << "(2) x = " << x << endl;
	//}
	//x++;
	//cout << "(3) x = " << x << endl;
	//if (x > 10) {
	//	int x = 30;
	//	cout << "(4) x = " << x << endl;
	//}
	//cout << "(5) x = " << x << endl;

	//// Suma 1 .. N
	//// wersja z p�tl� do while
	////
	const int N = 10;

	int result(0);
	int i(0);

	do {
		result += i;
		i++;
	} while (i < N);

	cout << "Suma 1 .. " << N << " = " << result << endl;

	////
	//// przyk�ad_1: switch()
	////
	//char oper;
	//float num1, num2;
	//cout << "Enter an operator (+, -, *, /): ";
	//cin >> oper;
	//cout << "Enter two numbers: ";
	//cin >> num1 >> num2;

	//switch (oper) {
	//case '+':
	//	cout << num1 << " + " << num2 << " = " << num1 + num2;
	//	break;
	//case '-':
	//	cout << num1 << " - " << num2 << " = " << num1 - num2;
	//	break;
	//case '*':
	//	cout << num1 << " * " << num2 << " = " << num1 * num2;
	//	break;
	//case '/':
	//	cout << num1 << " / " << num2 << " = " << num1 / num2;
	//	break;
	//default:
	//	cout << "Error! The operator is not correct";
	//	break;
	//}

	////
	//// przyk�ad_2: switch()
	////
	//short dzien;

	//cout << "Podaj nr dnia tygodnia: ";
	//cin >> dzien;

	//switch (dzien)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	cout << "Podany dzie� jest dniem roboczym";
	//	break;
	//case 6:
	//case 7:
	//	cout << "Mamy weekend";
	//	break;
	//default:
	//	cout << "Nie ma takiego dnia";
	//}

	////
	//// przyk�ad_1: zagnie�d�ona p�tla
	////
	//int ile = 0;
	//int licznik = 0;

	//for (int i = 1; i <= 9; i++)
	//	for (int j = 0; j <= 9; j++)
	//		for (int k = 0; k <= 9; k++) {
	//			if (i != j && i != k && j != k)
	//			{
	//				//cout << i << j << k << " ";
	//				ile++;
	//			};
	//			licznik++;
	//		}

	//cout << "Liczb trzycyfrowych o niepowtarzaj�cych si� cyfrach jest: " << ile << endl;
	//cout << "Licznik = " << licznik << endl;

	//
	// przyk�ad_2: zagnie�d�ona p�tla
	//
	//int ile = 0, i = 1, j = 0, k = 0, licznik = 0;

	//while (i <= 9) {
	//	while (j <= 9) {
	//		while (k <= 9) {
	//			if (i != j && i != k && j != k) {
	//				//cout << i << j << k << " ";
	//				ile++;
	//			}
	//			k++;
	//			licznik++;
	//		}
	//		k = 0;
	//		j++;
	//	}
	//	j = 0;
	//	i++;
	//}
	//cout << "Liczb trzycyfrowych o niepowtarzaj�cych si� cyfrach jest: " << ile << endl;
	//cout << "Licznik = " << licznik << endl;

	//int n = 82;
	//bool czyKwadrat = false;
	//int i = 1;

	//while (i < n && !czyKwadrat) {
	//	if (i * i == n)
	//		czyKwadrat = true;
	//	else
	//		i++;
	//}

	//cout << "i = " << i << " " << czyKwadrat;

	return 0;
}

