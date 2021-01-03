#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vi = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	
	for (auto i = vi.crbegin(); i != vi.crend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	for (auto i = vi.cend() - 1; i != vi.cbegin(); --i)
	{
		cout << *i << " ";
	}
	cout << *vi.cbegin() << endl;
	return 0;
}