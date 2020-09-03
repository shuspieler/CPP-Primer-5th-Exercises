#include<iostream>
#include<exception>
#include<stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a, b;
	
again:
	cin >> a >> b;
	try
	{
		if (b == 0)
		{
			throw std::runtime_error("divide by 0");
		}
		cout << a / b << endl;
	}
	catch(std::runtime_error err)
	{
		cout << err.what()
			<< "\nTry Again? Enter y or n" << endl;
		char c;
		cin >> c;
		if (c != 'n')
		{
			goto again;
		}
	}

	return 0;
}