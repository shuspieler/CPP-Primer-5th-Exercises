#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, blankspaceCnt = 0, tabsCnt = 0, NewlinesCnt = 0;
	char ch;
	while (cin.get(ch))
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
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		case ' ':
			++blankspaceCnt;
			break;
		case '\t':
			++tabsCnt;
			break;
		case '\n':
			++NewlinesCnt;
			break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of blankspaces: " << blankspaceCnt << '\n'
		<< "Number of tabs: " << tabsCnt << '\n'
		<< "Number of newlines: " << NewlinesCnt << '\n' << endl;
	return 0;
}