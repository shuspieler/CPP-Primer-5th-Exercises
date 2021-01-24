#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int size = 3;
	string tmp;
	cin >> tmp;
	char* c_01 = new char[size];
	char* c_02 = new char[tmp.length() + 1];

	for (size_t i = 0; i < tmp.length(); ++i)
	{
		*(c_01 + i) = tmp[i];
	}
	for (char* i = c_01; i < c_01 + tmp.length(); ++i)
	{
		cout << *i;
	}

	//error will occur when the length of input is langer than 3(or 2?)
	cout << endl;
	delete[] c_01;

	for (size_t i = 0; i < tmp.length(); ++i)
	{
		*(c_02 + i) = tmp[i];
	}
	for (char* i = c_02; i < c_02 + tmp.length(); ++i)
	{
		cout << *i;
	}
	cout << endl;
	delete[] c_02;
}
