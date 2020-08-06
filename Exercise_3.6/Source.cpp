#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void method_01(string b)
{
	string c = b;
	for (char& i : c)
	{
		i = 'X';
	}
	cout << c;
}

void method_02(string b)
{
	string c = b;
	string::size_type i;
	i = b.size();
	for (int j = 0; j < i; j++)
	{
		c[j] = 'X';
	}
	cout << c;
}

void method_03(string b)
{
	int i = 0;
	string c = b;
	while (c[i] != '\0')
	{
		c[i] = 'X';
		i++;
	}
	cout << c;
}

int main()
{
	string temp;
	cin >> temp;
	method_03(temp);
	return 0;
}
