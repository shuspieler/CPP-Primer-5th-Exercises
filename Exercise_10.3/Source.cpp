#include<iostream>
#include<vector>
#include<numeric>

using std::cout;
using std::endl;
using std::accumulate;
using std::vector;

int main()
{
	vector<int> vi{ 3, 2 };
	cout << accumulate(vi.begin(), vi.end(), 0) << endl;
	return 0;
}
