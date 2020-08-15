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

	for (vector<int>::iterator i = v.begin()+1; i != v.end(); i++)
	{
		cout << (*i) + (*(i - 1)) << endl;
	}

	cout << "Sum of the first and last elements, second and second-to-last and so on: " << endl;
	for (int k = 0; k < (int(v.size()) / 2); k++)
	{
		cout << *(v.begin()+k) + *(v.end()-k-1) << endl;
	}
	if (v.size() % 2 != 0)
	{
		cout << "middle value: " << v[int(v.size() / 2)] << endl;
	}
	return 0;
}