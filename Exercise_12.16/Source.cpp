#include<iostream>
#include<vector>
#include<memory>

using std::cout;
using std::endl;
using std::unique_ptr;
using std::vector;

int main()
{
	unique_ptr<vector<int>> upvi(new vector<int> { 2,3,5,7,11 });
	//auto p_01(upvi);
	unique_ptr<vector<int>> p_02;
	//p_02 = upvi;
	return 0;
}