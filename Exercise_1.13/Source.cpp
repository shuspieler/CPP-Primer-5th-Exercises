#include<iostream>
int main()
{
	int a, b;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> a >> b;
	if (a > b)
	{
		for (int var = a - 1; var > b; --var)
		{
			std::cout << var << std::endl;
		}
		return 0;
	}
	else if (a < b)
	{
		for (int var = a + 1; var < b; ++var)
		{
			std::cout << var << std::endl;
		}
		return 0;
	}
	else
		return 0;
}