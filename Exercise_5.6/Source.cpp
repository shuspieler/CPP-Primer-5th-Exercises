#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	string lettergrade;

	unsigned short numericgrade;
	cin >> numericgrade;

	lettergrade = numericgrade < 60 ? scores[0]: 
					numericgrade < 70 ? scores[1]:
					numericgrade < 80 ? scores[2]:
					numericgrade < 90 ? scores[3]:
					numericgrade < 100 ? scores[4] : scores[5];

	if (numericgrade != 100 && numericgrade>60)
	{
		if (numericgrade % 10 > 7)
		{
			lettergrade += '+';
		}
		else if (numericgrade % 10 < 3)
		{
			lettergrade += '-';
		}
	}
	cout << lettergrade;
	return 0;
}