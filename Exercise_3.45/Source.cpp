#include<iostream>
#include<cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::size_t;

int main()
{
	constexpr size_t row = 3;
	const size_t column = 4;

	int ia[row][column] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10,11}
	};

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (auto i = ia; i != ia + 3; i++)
	{
		for (auto  j = *i; j != *i + 4; j++)
		{
			cout << *j << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (auto &i : ia)
	{
		for (auto j : i)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
}