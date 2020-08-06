#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	string temp;
	cin >> temp;
	for (char i : temp) //Ex3.6: char &i or auto &i
	{
		i = 'X';
	}
	cout << temp;
	return 0;
}