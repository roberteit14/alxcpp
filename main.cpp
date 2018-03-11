#include <iostream>

int fibo(int n)
{
	if (n > 2) {
		return fibo(n-1) + fibo(n-2);
	}
	return 1;
}

int main()
{
	std::cout << "hello, world!" << std:endl;
	return 0;
}
