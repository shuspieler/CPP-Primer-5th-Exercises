#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int sum = 0, val = 1;
	/*while (val <= 10)
	{
		sum += val;
		++val;
	}*/
	while (sum += val, ++val, val<=10);
	std::cout << "Sum of 1 to 10 inclusive is " << sum << endl;
	return 0;
}