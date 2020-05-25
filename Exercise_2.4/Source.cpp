#include<iostream>
int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	/*
	VS将int取为4byte，即32bit。u-u2为-32。先手算一下-32的二进制是多少
	32 的二进制为100000，在32位内存为0000 0000 0000 0000 0000 0000 0010 0000，变成二进制负数取反加一为：
	1111 1111 1111 1111 1111 1110 0000
	上边的二进制-32即在内存中实际存储的值。
	因为输出是以unsignend输出，上述二进制转化成无符号十进制为：
	2^31+2^30+2^29+...+2^6+2^5 = 4294967264
	*/
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	return 0;
}