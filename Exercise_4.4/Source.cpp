#include<iostream>

using std::cout;
using std::endl;

int main()
{
	cout << 12 / 3 * 4 + 5 * 15 + 24 / 4 / 2 << endl;
	
	int i1 = 3, i2 = 4;
	if (i1 % 2 == 0)
	{
		cout << "i1 even" << endl;
	}
	else
	{
		cout << "i1 old" << endl;
	}
	if (i2 % 2 == 0)
	{
		cout << "i2 even" << endl;
	}
	else
	{
		cout << "i2 old" << endl;
	}
	cout << endl;

	//Reference: https://github.com/Mooophy/Cpp-Primer/tree/master/ch04
	short svalue = 32767; 
	++svalue; // -32768
	cout << svalue << endl;

	unsigned uivalue = 0;
	--uivalue;  // 4294967295
	cout << uivalue << endl;

	unsigned short usvalue = 65535;
	++usvalue;  // 0
	cout << usvalue << endl;

	return 0;
}