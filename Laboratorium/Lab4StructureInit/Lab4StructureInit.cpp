#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;

	string toString() {
		return "{ " + name + ", " + to_string(age) + " }";
	}
};


int main()
{
	const int N = 5;
	Student students[5];

	for (int i = 0; i < N; i++)
		students[i] = {"a", i};

	for (int i = 0; i < N; i++)
		cout << i << ": " << students[i].toString();
	cout << endl;

	for (int i = 0; i < N; i++)
		students[i] = {};

	for (int i = 0; i < N; i++)
		cout << i << ": " << students[i].toString();

}

