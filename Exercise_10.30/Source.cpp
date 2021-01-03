#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::copy;
using std::istream_iterator;
using std::ostream_iterator;
using std::vector;

int main()
{
	istream_iterator<int> iii(cin), eof;
	vector<int> vi(iii, eof);
	sort(vi.begin(), vi.end());
	ostream_iterator<int> oii(cout, " ");
	copy(vi.begin(), vi.end(), oii);
	cout << endl;
	return 0;
}
