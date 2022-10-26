#include <iostream>

void increase(int &x)
{
    x++;
}

void dcrease(int *x)
{
    (*x)--;
}

int main()
{
    int x = 0;
    int &ref = x;
    int *ptr = &x;
    int *&ref2 = ptr;
    increase(x);
    std::cout << x << std::endl;
    increase(ref);
    std::cout << ref << std::endl;
    dcrease(ptr);
    dcrease(ref2);
    std::cout << x << std::endl;
    return 0;
}