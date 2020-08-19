#include<iostream>
#include<string>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::strcmp;
using std::strcpy;
using std::strcat;

int main()
{
	char ch1[140];
	char ch2[140];
	char ch3[280];
	cin >> ch1 >> ch2;
	strcpy_s(ch3, ch1);
	strcat_s(ch3, ch2);
	cout << ch3;
	return 0;
}