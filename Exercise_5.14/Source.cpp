#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string temp;
	string maxString;
	string lastString;
	unsigned maxCnt = 0;
	unsigned Cnt = 0;
	while (cin >> temp)
	{
		if (maxCnt == 0)
		{
			++maxCnt;
			++Cnt;
			maxString = temp;
			lastString = temp;
			continue;
		}

		++Cnt;
		if (temp == lastString)
		{
			if (Cnt > maxCnt)
			{
				maxCnt = Cnt;
				maxString = temp;
			}
		}
		else
		{
			Cnt = 1;
			lastString = temp;
		}
	}

	if (maxCnt > 1)
	{
		cout << "maxString: " << maxString << endl;
		cout << "maxCnt: " << maxCnt << endl;
	}
	else
	{
		cout << "no word was repeated." << endl;
	}
	return 0;
}