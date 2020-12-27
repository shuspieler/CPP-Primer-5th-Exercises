#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<char> vc_01 = { 'a', 'b', 'c' };
	cout << vc_01.at(0) << endl;
	cout << vc_01.front() << endl;
	cout << *vc_01.begin() << endl;

	vector<char> vc_02;
	cout << vc_02.front() << endl;
	cout << *vc_02.begin() << endl;
	cout << vc_02.at(0) << endl;
	
	return 0;
}