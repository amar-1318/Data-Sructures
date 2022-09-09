#include <stdio.h>
int add(int a, int b)
{              // This is prototype of function or header of function//These are formal parameters
    int c;     //
    c = a + b; // This is defination of function
    return c;  //
}

int main()
{
    int x, y, z;
    x = 10;
    y = 15;
    z = add(x, y); // This are actual parameters//This is function call
    printf("sum is %d", z);

    return 0;
}
// Notes:
// Function will have its own activation record
// Function cannot access variables of main and vice versa means we cannot use x,y in function cause they belong to main function
//why we need that? : We are reducing work load of main function