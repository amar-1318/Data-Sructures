#include <stdio.h>
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int search(struct array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
    return 0;
}

int isearch(struct array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}
int main()
{

    struct array arr
    {
        {1, 2, 3, 4, 5}, {10}, { 5 }
    };
    // printf("%d", search(&arr, 8));

    return 0;
}