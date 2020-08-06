#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int string_concatenate()
{
	string total;
	string temp;
	while (cin >> temp)
	{
		total = total + temp + " ";
	}
	cout << total;
	return 0;
}

int main()
{
	string_concatenate();
	return 0;
}