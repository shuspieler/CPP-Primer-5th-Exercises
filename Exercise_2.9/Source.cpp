#include<iostream>
int main()
{
	//std::cin >> int input_value; //Error
	//int i = { 3.14 }; //Error
	//int i{ 3.14 }; //Error
	int i(3.14); //OK
	//double salary = wage = 9999.99; //Error
	int i = 3.14; //OK, but i is 3
}