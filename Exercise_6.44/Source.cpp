#include<iostream>
#include"Header.h"

int main()
{
	std::cout << isShorter("a", "ab") << std::endl;
	std::cout << isShorter("abc", "abc") << std::endl;
	std::cout << isShorter("d", "abc") << std::endl;
	return 0;
}
