#include <stdio.h>
#include <iostream>
using namespace std;
// -------------------Using recursion-------------------
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}
// --------------------Using Loops-------------------
int facto(int n)
{
    int f = 1;
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int x;
    printf("%d", facto(5));
    return 0;
}
