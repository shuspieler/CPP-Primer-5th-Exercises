#include<iostream>
int main()
{
	int i = 0;
	//double* dp = &i; //指针类型不符
	//int* i = i; // 将int型赋予指针变量不合法
	int* p = &i;
	return 0;
}