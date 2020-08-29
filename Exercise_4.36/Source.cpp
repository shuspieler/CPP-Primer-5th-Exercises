#include<iostream>

int main()
{
	int i = 3;
	double d = 5.1;
	i *= static_cast<int>(d);
	std::cout << i;
	return 0;
}