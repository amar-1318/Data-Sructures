#include <stdio.h>
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
// Using auxilary array method

int reverse(struct array *arr)
{
    int i, j;
    j = 0;
    int *B;
    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
    return 0;
}
// Using swap method to reverse the array
int swap(struct array *arr)
{
    int i, j;

    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        int temp;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }

    return 0;
}
void display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}

int main()
{
    struct array arr
    {
        {1, 2, 4, 6, 8, 10}, {10}, { 6 }
    };
    printf("Before reverse\n");
    display(arr);
    // reverse(&arr);
    swap(&arr);
    printf("After reverse\n");
    display(arr);

    return 0;
}