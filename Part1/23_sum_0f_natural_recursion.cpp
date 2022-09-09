#include <stdio.h>
#include <iostream>
using namespace std;
//----------------------------------------------------Using Recursion----------------------------------------------------

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return sum(n - 1) + n;
//     }
// }
// int main()
// {
//     printf("%d", sum(5));
// }

/* -----------------------------------------Note:---------------------------------------------------------------------

Recursion will be costly cause it uses stack internally
But time taken by recursion is also O(n)

There are two more ways
1} Using Loops//It will tak O(n) time cause it have for loop which took n time to evaluate the loop
2} Using Formula n(n+1)/2//As this will take O(1) constant time
*/

//------------------------------------------------Using Formula-----------------------------------------------------------------

/*
int sum(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    printf("%d", sum(5));
}

*/

//-----------------Using Loops-------------------
int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i; // It will keep on added in s
    }
    return s;
}
int main()
{
    printf("%d", sum(5));

    return 0;
}
