/*#include<iostream>
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
}*/


//
//  main.cpp
//  c3
//
//  Created by Huizhi on 24.10.20.
//

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using namespace std;


int main() {
    string s1, s2;

	while (cin >> s1)
	{
		s2 += s1;
		cout << s2 << endl;
		s2 += " ";
		cout << s2 << endl;
	}
    cout << s2 << endl;

    return 0;
}