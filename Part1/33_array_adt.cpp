#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array arr)
{

    for (int i = 0; i < arr.length; i++)
    {
        printf("Elements are %d \n", arr.A[i]);
    }
}
int main()
{
    struct array arr;
    int n;
    // arr.length = 0;
    
    printf("Enter the size of array \n");
    scanf("%d", &arr.size);
    
    arr.A = (int *)malloc(arr.size * sizeof(int));
    
    printf("Enter the length of array u want \n");
    scanf("%d", &n);
    
    printf("Enter the elements\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of A[%d] ", i);
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    display(arr);

    // arr.length++;

    return 0;
}