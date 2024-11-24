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
	//// wersja z pêtl¹ while
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
	//// wersja z pêtl¹ do while
	////
	//const int N = 10;

	//int result(0);
	//int i(0);

	//do {
	//	result += i;
	//	i++;
	//} while (i < N);

	//cout << "Suma 1 .. " << N << " = " << result << endl;

	//const int N = 5;

	//for (int row = 0; row < N; row++) {
	//	for (int col = 0; col < N; col++) {
	//		if (col > row)
	//			continue;
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	//
	// przyk³ad_1: switch()
	//
	//char arithmetic_operator;
	//float num1, num2;
	//cout << "Enter an operator (+, -, *, /): ";
	//cin >> arithmetic_operator;
	//cout << "Enter two numbers: ";
	//cin >> num1 >> num2;

	//switch (arithmetic_operator) {
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
	//// przyk³ad_2: switch()
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
	//	cout << "Podany dzien jest dniem roboczym";
	//	break;
	//case 6:
	//case 7:
	//	cout << "Mamy weekend";
	//	break;
	//default:
	//	cout << "Nie ma takiego dnia";
	//}

	////
	//// przyk³ad_1: zagnie¿d¿ona pêtla
	////
	//int ile = 0;
	//int licznik = 0;

	//for (int i = 1; i <= 9; i++)
	//	for (int j = 0; j <= 9; j++)
	//		for (int k = 0; k <= 9; k++) {
	//			if (i != j && i != k && j != k)
	//			{
	//				//cout << i << j << k << endl;
	//				ile++;
	//			}
	//			else
	//			{
	//				//cout << i << j << k << endl;
	//			}
	//			licznik++;
	//		}

	//cout << "Liczb trzycyfrowych o niepowtarzaj¹cych siê cyfrach jest: " << ile << endl;
	//cout << "Licznik = " << licznik << endl;

	//
	// przyk³ad_2: zagnie¿d¿ona pêtla
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
	//cout << "Liczb trzycyfrowych o niepowtarzaj¹cych siê cyfrach jest: " << ile << endl;
	//cout << "Licznik = " << licznik << endl;

	//int n = 1000 * 1000;
	//bool czyKwadrat = false;
	//int i = 1;
	//int count = 0;

	//while (i * i <= n && !czyKwadrat) {
	//	if (i * i == n)
	//		czyKwadrat = true;
	//	else
	//		i++;
	//	count++;
	//}

	//cout << "i = " << i << " " << czyKwadrat << endl;
	//cout << "count = " << count << endl;

int n = 997;// *997;
	bool czyPierwsza = true;
	int i = 2;

	while (i < n && czyPierwsza) {
		if (n % i == 0)
			czyPierwsza = false;
		else
			i++;
	}

	cout << "i = " << i << " " << czyPierwsza;

	//return 0;
}

