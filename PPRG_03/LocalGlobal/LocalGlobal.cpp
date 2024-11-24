#include <iostream>
using namespace std;

// Global variable declaration
int programmGlobal = 3;

void test_1();
void test_2();

int main()
{
	// local variable to main()
	int mainLocal = 1;
	cout << "main():mainLocal: " << mainLocal << endl;

	test_1();
	test_2();

	// illegal: testLocal not declared inside main()
	//testLocal = 22;

	// Global
	programmGlobal++;
	cout << "main():programmGlobal: " << programmGlobal << endl;

	// Static
	//illegal: testStatic++;

	test_1();
}
void test_1()
{
	// local variable to test()
	int testLocal = 2;
	cout << "test_1():testLocal: " << testLocal << endl;

	// illegal: mainLocal not declared inside test()
	//cout << "test():mainLocal: " << mainLocal << endl;

	// Global
	programmGlobal++;
	cout << "test_1():programmGlobal: " << programmGlobal << endl;

	static int testStatic = 4;
	testStatic++;
	cout << "test_1():testStatic: " << testStatic << endl;

}
void test_2()
{
	// Global
	programmGlobal++;
	cout << "test_2():programmGlobal: " << programmGlobal << endl;

	static int testStatic = 4;
	testStatic++;
	cout << "test_2():testStatic: " << testStatic << endl;

}