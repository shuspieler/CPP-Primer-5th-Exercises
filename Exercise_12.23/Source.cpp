#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<memory>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	char c_01[] = "C++ ";
	char c_02[] = "Primer";
	char* c_l = new char[strlen(c_01) + strlen(c_02) + 1](); //error prone, needs further discusstion 
	strcat(c_l, c_01);
	strcat(c_l, c_02);
	for (size_t i = 0; i != strlen(c_01) + strlen(c_02); ++i)
	{
		cout << c_l[i];
	}
	cout << endl;
	cout << strlen(c_01) << " " << strlen(c_02) << " " << strlen(c_l) << endl;
	delete[] c_l;

	string s_01, s_02;
	while (cin >> s_01)
	{
		cin >> s_02;
		string tmp = s_01 + s_02;
		char* c_p = new char[tmp.length()]();
		for (size_t i = 0 ; i < tmp.length(); ++i)
		{
			*(c_p+i) = tmp[i];
		}
		for (char* i = c_p; i < c_p + tmp.length(); ++i)
		{
			cout << *i;
		}
		cout << endl;
	}
	return 0;
}