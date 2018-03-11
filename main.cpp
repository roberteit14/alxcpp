#include <iostream>

int fibo(const int n) {
        int l1 = 0;
        int l2 = 1;
        int l;
        for (int i = 0; i < n-1; i++) {
                l = l1 + l2;
                l1 = l2;
                l2 = l;
        }
        return l;
}

int main()
{
        std::cout << "hello, world!\n";
        int i;
        std::cin >> i;
        int f_i;
        f_i = fibo(i);
        std::cout << i <<"-ty wyraz ciagu Fibonacciego to: " << f_i <<'\n';

    return 0;
}
