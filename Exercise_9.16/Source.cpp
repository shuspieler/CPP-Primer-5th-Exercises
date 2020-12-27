#include<iostream>
#include<vector>
#include<list>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::list;

int main()
{
	//vector<int> vi_01 = { 1,2,3 };
	list<int> vi_02 = { 4,6,6 };
	vector<int> vi_03 = { 4,5,6 };

	auto vi_02_iterator = vi_02.begin();
	auto vi_03_iterator = vi_03.begin();

	if (vi_02.size() < vi_03.size())
	{
		for (decltype(vi_02.size()) i = 0; i < vi_02.size(); i++)
		{
			if (*(vi_02_iterator) > * (vi_03_iterator))
			{
				cout << "vi_02 is bigger than vi_03" << endl;
				return 0;
			}
			vi_02_iterator++;
			vi_03_iterator++;
		}
		cout << "vi_02 is smaller than vi_03" << endl;
	}

	else if (vi_02.size() > vi_03.size())
	{
		for (decltype(vi_03.size()) i = 0; i < vi_03.size(); i++)
		{
			if (*(vi_03_iterator) > * (vi_02_iterator))
			{
				cout << "vi_03 is bigger than vi_02" << endl;
				return 0;
			}
			vi_02_iterator++;
			vi_03_iterator++;
		}
		cout << "vi_03 is smaller vi_02" << endl;
	}

	else
	{
		for (decltype(vi_03.size()) i = 0; i < vi_03.size(); i++)
		{
			if (*(vi_03_iterator) > * (vi_02_iterator))
			{
				cout << "vi_03 is bigger than vi_02" << endl;
				return 0;
			}
			if (*(vi_03_iterator) < * (vi_02_iterator))
			{
				cout << "vi_03 is smaller than vi_02" << endl;
				return 0;
			}
			vi_02_iterator++;
			vi_03_iterator++;
		}
		cout << "vi_03 is equal to vi_02" << endl;
	}

	return 0;
}