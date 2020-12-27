#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> vi_01 = { 1,2,3 };
	vector<int> vi_02 = { 4,5,6 };
	vector<int> vi_03 = { 4,5,6 };

	if (vi_01 == vi_02)
	{
		cout << "vi_01 is equal to vi_02" << endl;
	}
	else
	{
		cout << "vi_01 is not equal to vi_02" << endl;
	}

	if (vi_01 == vi_03)
	{
		cout << "vi_01 is equal to vi_03" << endl;
	}
	else
	{
		cout << "vi_01 is not equal to vi_03" << endl;
	}

	if (vi_02== vi_03)
	{
		cout << "vi_02 is equal to vi_03" << endl;
	}
	else
	{
		cout << "vi_02 is not equal to vi_03" << endl;
	}

	return 0;
}