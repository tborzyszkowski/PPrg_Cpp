#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
	//double x(0.0);

	//x = [] {return 200; }();
	//cout << "x = " << x << endl;

	//x = [](int x, int y) {return 0.5 * (x + y); }(1, 2);
	//cout << "x = " << x << endl;

	//x = [](int x, int y) -> double {return 0.5 * (x + y); }(1, 2);
	//cout << "x = " << x << endl;

	////////////////////////

	//auto v = vector<int>{5, 3, -3, 2, 7, 1, 0, 99, 3};

	//for (auto ind : v)
	//	cout << ind << " ";
	//cout << endl;

	//auto i = partition(v.begin(), v.end(),
	//	[](int x) {return x >= -1 && x <= 4;  });

	//if (i != v.end()) cout << *i << endl;
	//for (auto ind : v)
	//	cout << ind << " ";
	//cout << endl;

	////////////////////////

	//auto v = vector<int>{ 1, 2, 3, 4, 5, };

	//for (auto ind : v)
	//	cout << ind << " ";
	//cout << endl;

	//int i = 2;
	//transform(v.begin(), v.end(), v.begin(),
	//	[=](int x) { return x * i; });

	//cout << i << endl;
	//for (auto ind : v)
	//	cout << ind << " ";
	//cout << endl;

	////////////////////////

	//vector<int> v;
	//v.resize(9, 0);

	//for (auto ind : v)
	//	cout << ind << " ";
	//cout << endl;

	//int i = 0;
	////generate(v.begin() + 2, v.begin() + 6,
	////	[&] { i += 2;  return i; });
	//auto even_ints = [&] { i += 2;  return i; };
	//generate(v.begin() + 2, v.begin() + 6, even_ints);

	//cout << i << endl;
	//for (auto ind : v)
	//	cout << ind << " ";
	//cout << endl;

	////////////////////////

	int i(1), j(2);

	// value parameters
	auto val_lbd = [](auto x, auto y) { // x++; 
										return (x + y) * 2; };
	cout << val_lbd(i, j) << endl;
	cout << "i = " << i << ", j = " << j << endl;

	// const reference parameters
	auto cref_lbd = [](auto const & x, auto const & y) {// x++; 
		return (x + y) * 2; };
	cout << cref_lbd(i, j) << endl;
	cout << "i = " << i << ", j = " << j << endl;

	// non-const reference parameters
	auto ref_lbd = [](auto & x, auto & y) { x++; 
		return (x + y) * 2; };
	cout << ref_lbd(i, j) << endl;
	cout << "i = " << i << ", j = " << j << endl;
}
