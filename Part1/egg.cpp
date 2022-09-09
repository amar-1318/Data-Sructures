#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int *print(int A[5], int n)
{
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    return ptr;
}
int main()
{
    int *A;
    // int A[5]={1,2,3,4,5};
    A = print(A, 5);
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("The values of array A[%d] are %d\n", i, A[i]);
    }
    //   int A[]={1,2,3,4,5};
    //   print(A,5);

    return 0;
}

// int main()
// {

//     int n;
//     cout << "Enter the size of array ";
//     cin >> n;
//     int *ptr;
//     ptr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of A[%d]\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("The values are %d\n", ptr[i]);
//     }

//     return 0;
// }


//-------------Sum of numbers in array----------------

// #include <stdio.h>
// #include <iostream>
// using namespace std;
// int sum(int A[])
// {
//     int sum;
//     sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         sum = sum + A[i];
//     }
//     return sum;
// }
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     printf("%d",sum(a));

//     return 0;
// }