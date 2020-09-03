#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch;
	char temp = NULL;
	
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
			++aCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			if (temp == 'f')
			{
				++fiCnt;
			}
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		case 'f':
		{
			if (temp == 'f')
			{
				++ffCnt;
				break;
			}
		}
		case 'l':
		{
			if (temp == 'f')
			{
				++flCnt;
				break;
			}
		}
		}
		temp = ch;
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of ff: " << ffCnt << '\n'
		<< "Number of fl: " << flCnt << '\n'
		<< "Number of fi: " << fiCnt << endl;
}