#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int int_swap(int* i, int* j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
	return 0;
}

int main()
{
	int a, b;

	a = 3, b = 4;
	int_swap(&a, &b);
	cout << a <<" " << b << endl;

	a = 5, b = 2;
	int_swap(&a, &b);
	cout << a <<" " << b << endl;
}