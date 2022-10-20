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

	//for (int i = 0; i < N; i++) {
	//	result += i;
	//}

	//cout << "Suma 1 .. " << N << " = " << result << endl;


	//// Suma 1 .. N
	//// wersja z pêtl¹ while
	////
	//const int N = 10;

	//int result(0);
	//int i(0);

	//while (i < N) {
	//	result += i;
	//	i++;
	//}

	//cout << "Suma 1 .. " << N << " = " << result << endl;

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

	////
	//// przyk³ad_1: switch()
	////
	//char oper;
	//float num1, num2;
	//cout << "Enter an operator (+, -, *, /): ";
	//cin >> oper;
	//cout << "Enter two numbers: " << endl;
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
	//	cout << "Podany dzieñ jest dniem roboczym";
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

	//for (int i = 1; i <= 9; i++)
	//	for (int j = 0; j <= 9; j++)
	//		for (int k = 0; k <= 9; k++)
	//			if (i != j && i != k && j != k)
	//			{
	//				cout << i << j << k << " ";
	//				ile++;
	//			}

	//cout << "Liczb trzycyfrowych o niepowtarzaj¹cych siê cyfrach jest: " << ile << endl;

	//
	// przyk³ad_2: zagnie¿d¿ona pêtla
	//
	int ile = 0, i = 1, j = 0, k = 0;

	while (i <= 9) {
		while (j <= 9) {
			while (k <= 9) {
				if (i != j && i != k && j != k) {
					cout << i << j << k << " ";
					ile++;
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	cout << "Liczb trzycyfrowych o niepowtarzaj¹cych siê cyfrach jest: " << ile << endl;

	return 0;
}

