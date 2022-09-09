#include <stdio.h>
#include <iostream>
using namespace std;
int pass(int &x, int c)
{ 
    // x is nothing bt P
    // Cause in call be adress changes in
    // Local variables including paramaters are stored in activation record
    c = c - 1;

    if (c == 0)
    {
        return 1;
    }
    else
    {
        x = x + 1; //We are changing the value of x by referencing
        //If x was call by value it will have his activation record and values of x will be like 7,8,9 
        //At returning time x will be 9 for every value cause it is single copy
        return pass(x, c) * x;
    }
}

int main()
{
    int p = 5,q=5; 
    printf("%d", pass(p, p));

    return 0;
}