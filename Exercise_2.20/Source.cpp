#include<iostream>
int main()
{
	int i = 42;
	int* p1 = &i;
	*p1 = *p1 * *p1;
	std::cout << *p1;
	return 0;
}