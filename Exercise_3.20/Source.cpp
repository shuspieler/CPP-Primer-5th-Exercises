#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	int temp;
	vector<int> v;
	while (cin >> temp)
	{
		v.push_back(temp);
	}
	cout << "total numbers of the integers: " << v.size() << endl;
	cout << "Sum of each pair of adjacent elements: " << endl;

	for (vector<int>::size_type i = 1; i < v.size(); i++)
	{
		cout << v[i] + v[i - 1] << endl;
	}

	cout << "Sum of the first and last elements, second and second-to-last and so on: " << endl;
	for (int k = 0; k < (int(v.size()) / 2); k++)
	{
		cout << v[k] + v[v.size() -1 - k] << endl;
	}
	if (v.size() % 2 != 0)
	{
		cout << "middle value: " << v[int(v.size() / 2)] << endl;
	}
	return 0;
}