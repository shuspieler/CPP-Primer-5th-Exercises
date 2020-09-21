#include<iostream>

using namespace std;

int swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
	return 0;
}

int main()
{
	int val_01 = 3, val_02 = 5;
	cout << "Before: " << val_01 << " " << val_02 << endl;
	swap(val_01, val_02);
	cout << "After: " << val_01 << " " << val_02 << endl;
	return 0;
}