#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::copy;
using std::unique_copy;
using std::istream_iterator;
using std::ostream_iterator;
using std::vector;
using std::back_inserter;

int main()
{
	istream_iterator<int> iii(cin), eof;
	ostream_iterator<int> oii(cout, " ");

	vector<int> vi_orig(iii, eof);
	sort(vi_orig.begin(), vi_orig.end());
	
	vector<int> vi_unqiue;
	unique_copy(vi_orig.cbegin(), vi_orig.cend(), back_inserter(vi_unqiue));
		
	copy(vi_unqiue.begin(), vi_unqiue.end(), oii);
	cout << endl;
	return 0;
}
