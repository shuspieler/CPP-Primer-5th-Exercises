#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;
	cin >> s1; //the first string
	bool flag = false;
	while (cin >> s2)
	{
		if (s2 == s1)
		{
			cout << s2 << " occors two times" << endl;
			flag = true;
			break;
		}
		else
		{
			s1 = s2;
		}
	}
	if (flag == false)
	{
		cout << "no word was repeated" << endl;
	}
	return 0;
}