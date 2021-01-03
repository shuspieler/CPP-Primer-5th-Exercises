#include<iostream>
#include<vector>
#include<numeric>

using std::cout;
using std::endl;
using std::vector;
using std::accumulate;

int main()
{
	vector<double> vd{ 3, 2.5 };
	cout << accumulate(vd.begin(), vd.end(), 0.0);
	return 0;
}