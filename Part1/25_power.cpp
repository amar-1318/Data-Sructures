#include <stdio.h>
#include <iostream>
using namespace std;
// Using Recursion
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return pow(m, n - 1) * m;
}
// Using another method

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power(m * m, n / 2);
    }
    else
    {
        return m * power(m * m, (n - 1) / 2);
    }
}

int main()
{
    printf("%d", power(2, 3));
    return 0;
}