#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s1;
	string s2("Hello world!");

	vector<int> v1;
	vector<int> v2{ 3,4,5 };

	cout << "Size of bool" << " is " << sizeof(bool) << endl;
	cout << "Size of char" << " is " << sizeof(char) << endl;
	cout << "Size of wchar_t" << " is " << sizeof(wchar_t) << endl;
	cout << "Size of char16_t" << " is " << sizeof(char16_t) << endl;
	cout << "Size of char32_t" << " is " << sizeof(char32_t) << endl;
	cout << "Size of short" << " is " << sizeof(short) << endl;
	cout << "Size of int" << " is " << sizeof(int) << endl;
	cout << "Size of long" << " is " << sizeof(long) << endl;
	cout << "Size of long long" << " is " << sizeof(long long) << endl;
	cout << "Size of double" << " is " << sizeof(double) << endl;
	cout << "Size of long double" << " is " << sizeof(long double) << endl;

	cout << "Size of s1" << " is " << sizeof(s1) << endl;
	cout << "Size of s2" << " is " << sizeof(s2) << endl;
	cout << "Size of v1" << " is " << sizeof(v1) << endl;
	cout << "Size of v2" << " is " << sizeof(v2) << endl;
	return 0;
}