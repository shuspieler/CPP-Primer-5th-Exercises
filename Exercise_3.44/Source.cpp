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
	
	using int_array1 = int[4];

	for (int_array1 *i = ia; i != ia + 3; i++)
	{
		for (int* j = *i; j != *i + 4; j++)
		{
			cout << *j << " ";
		}
		cout << endl;
	}
	cout << endl;

	typedef int int_array2[4];
	
	for (int_array2 &i : ia)
	{
		for (int j : i)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int(&i)[4] : ia)
	{
		for (int(&j) : i)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
}