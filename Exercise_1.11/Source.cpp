#include<iostream>
int main()
{
	int a, b;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> a >> b;
	int var = a;
	if (a > b)
	{
		--var;
		while (var > b)
		{
			std::cout << var << std::endl;
			--var;
		}
		return 0;
	}
	else if (a < b)
	{
		++var;
		while (var < b)
		{
			std::cout << var << std::endl;
			++var;
		}
		return 0;
	}
	else
		return 0;
}