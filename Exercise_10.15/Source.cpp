#include<iostream>

using std::cout;
using std::endl;



int main()
{
	int i = -3;
	auto f = [i](int j) {return i + j; };
	cout << f(-2);
	return 0;
}