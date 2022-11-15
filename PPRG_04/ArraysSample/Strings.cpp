#include <iostream>
#include <string>
#include "Strings.h"

using namespace std;

void simpleStrings() {
	char str1[] = "C++";
	char str2[4] = "C++";
	char str3[] = { 'C', '+', '+', '\0' };
	char str4[4] = { 'C', '+', '+', '\0' };

	//char str5[100] = "C++";
	char str5[100] = { 'C', '+', '+', '\0', 'a', 'b', 'c' };

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;
	cout << "str4: " << str4 << endl;
	cout << "str5: " << str5 << endl;

	cout << "Enter str5: ";
	// wpisz: Ala ma kota
	cin >> str5;
	cin.get(); // get new line
	//cin.get(str5, 100);
	cout << "You entered: " << str5 << endl;

	string str6;
	cout << "Enter str6: ";
	getline(cin, str6);
	cout << "You entered: " << str6 << endl;

	cout << "Len(str5) = " << stringLen(str5) << endl;
	cout << "Len(str6) = " << realStringLen(str6) << endl;
}

int stringLen(char s[]) {
	char* pom = s;
	int len = 0;
	while(*pom != '\0') {
		pom++;
		len++;
	};
	return len;
}

int realStringLen(string str) {
	return str.size();
}