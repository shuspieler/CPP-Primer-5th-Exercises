#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 15;
	auto f = [&]()->bool
	{
		while (i > 0)
		{
			--i;
			cout << i << endl;
		}
		cout << endl;
		return true;
	};
	cout << f() << endl;
	return 0;
}