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
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	string lettergrade;
	
	unsigned short numericgrade;
	cin >> numericgrade;

	if (numericgrade < 60)
	{
		lettergrade = scores[0];
	}
	else
	{
		if (numericgrade < 70)
		{
			lettergrade = scores[1];
		}
		else
		{
			if (numericgrade < 80)
			{
				lettergrade = scores[2];
			}
			else
			{
				if (numericgrade < 90)
				{
					lettergrade = scores[3];
				}
				else
				{
					if (numericgrade < 100)
					{
						lettergrade = scores[4];
					}
					else
					{
						lettergrade = scores[5];
					}
				}
			}
		}
	}
	if (numericgrade != 100 && numericgrade > 60)
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