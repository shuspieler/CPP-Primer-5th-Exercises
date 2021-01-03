#include<iostream>

using std::cout;
using std::endl;

auto f = [](int a, int b) {return a + b; };

int main()
{
	cout << f(3, 2);
	return 0;
}