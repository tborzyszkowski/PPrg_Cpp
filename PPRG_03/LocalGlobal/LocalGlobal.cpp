#include <iostream>
using namespace std;

// Global variable declaration
int programmGlobal = 3;

void test();

int main()
{
	// local variable to main()
	int mainLocal = 1;
	cout << "main():mainLocal: " << mainLocal << endl;

	test();

	// illegal: testLocal not declared inside main()
	//testLocal = 22;

	// Global
	programmGlobal++;
	cout << "main():programmGlobal: " << programmGlobal << endl;

	// Static
	// illegal: testStatic++;

	test();
}
void test()
{
	// local variable to test()
	int testLocal = 2;
	cout << "test():testLocal: " << testLocal << endl;

	// illegal: mainLocal not declared inside test()
	//cout << "test():mainLocal: " << mainLocal << endl;

	// Global
	programmGlobal++;
	cout << "test():programmGlobal: " << programmGlobal << endl;

	static int testStatic = 4;
	testStatic++;
	cout << "test():testStatic: " << testStatic << endl;

}