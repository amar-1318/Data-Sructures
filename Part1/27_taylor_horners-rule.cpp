#include <iostream>
#include <stdio.h>
int horn(int x, int n)
{
    static int s = 1;
    if (n == 0)
    {
        // When n will 0 it will return S
        return s;
    }
    else
    {
        s = 1 + x * s / n;
        return horn(x, n - 1);
        // It is just recursive call
    }
}

//---------Using Loops-----------


int loop(int x, int n){
    int s = 1;
    for(int n; n>0; n--){
        s = 1 + x/n*s;
    }
    return s;
}

int main()
{
    printf("%d\n", horn(1, 10));
    printf("%d",loop(1,10));
    return 0;
}