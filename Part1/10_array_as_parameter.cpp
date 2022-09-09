#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
// void fun(int A[], int n)
// {
//     // We can write *A also bt A[] is made fr specific array

//     // for Printing elements
//     // for(int i=0;i<n;i++){
//     //     printf("The value of A[%d] is %d\n",i,A[i]);
//     // }

//     // For Modifying elements in main func
//     A[0] = 25;
//     for (int i = 0; i < n; i++)
//     {//It will modify cause pass by adress allow to change that
//         printf("The value of A[%d] is %d\n", i, A[i]);
//     }
// }
// int main()
// {
//     int A[5] = {2, 4, 6, 8, 10};
//     fun(A, 5);

//     return 0;
// }

//----------Returning the array-----------------
int *fun(int n)
{ // int* : It means it is returning an array
  int *ptr;
  ptr = (int *)malloc(n * sizeof(int));
  return ptr; // It will return an Array size of 4
}

int main()
{
  int *A;     // Cause A is directing to an array //For fetcing the adress of an Array.
  A = fun(5); // Means it will go after returning like A = A[5];

  A[0] = 1;
  A[1] = 2;
  A[2] = 3;
  printf("%d", A[0]);

  return 0;
}
