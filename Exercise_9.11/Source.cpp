#include<iostream>
#include<vector>

using std::vector;

int main()
{
	vector<int> c; //empty
	vector<int> c1(c); //copy c, empty.
	vector<int> c2 = c; //copy c, empty.
	vector<int> c3{ 7, 3, 9 }; //7 3 9
	vector<int> c4 = { 8, 4, 1 }; //8 4 1
	vector<int> c5(c4.begin(), c4.end() - 2); //8
	return 0;
}