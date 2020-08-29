#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string option_01(unsigned short score)
{
	unsigned short grade = score;
	string finalgrade;
	finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	return finalgrade;
}

string option_02(unsigned short score)
{
	unsigned short grade = score;
	string finalgrade;
	if (score >= 90)
	{
		return "high pass";
	}
	else if (score >= 75)
	{
		return "pass";
	}
	else if (score >= 60)
	{
		return "low pass";
	}
	else
	{
		return "fail";
	}
}

int main()
{
	cout << "Please input a score(0-100): " << endl;
	unsigned short score;
	cin >> score;
	cout << "Option_01: " << option_01(score) << endl;
	cout << "Option_02: " << option_02(score) << endl;

	//string s = "word";
	//string pl = s + s[s.size() - 1] == 's' ? "" : "s";
	
	return 0;
}