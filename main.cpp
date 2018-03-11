#include <iostream>

int fibo(int n)
{
	if (n > 2){

		int wynik = fibo(n-1) + fibo(n-2);
		std::cout << n << "\n";
		return wynik;
	}
	return 1;
}


int main()
{
	std::cout << "hello, world!" << std:endl;
	return 0;
}

