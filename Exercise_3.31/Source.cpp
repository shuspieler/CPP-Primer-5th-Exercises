#include<iostream>
#include<vector>

using std::vector;

int main()
{
	int ints_01[10] = { 0, 1, 2,3,4,5,6,7,8,9 };

	int ints_2[10];
	for (int j = 0; j < 10; j++)
	{
		ints_2[j] = ints_01[j];
	}

	vector<int> v_01 = { 0,1,2,3,4,5,6,7,8,9 };
	/*vector<int> v_02;

	v_02 = v_01;*/
	vector<int> v_02(v_01);
	
	return 0;
}