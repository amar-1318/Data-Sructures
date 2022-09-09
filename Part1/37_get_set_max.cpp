#include <iostream>
#include <stdio.h>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};

int get(struct array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        index = arr.A[index];
    }
    return index;
}

int set(struct array *arr, int key, int index)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = key;
    }
    return 0;
}
void display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("Value of A[%d] is %d\n", i, arr.A[i]);
    }
}

int max(struct array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int main()
{
    struct array arr
    {
        {1, 2, 3, 4, 5, 6, 7, 8}, {10}, { 8 }
    };
    // printf("%d", get(arr, 7));
    printf("Before Set\n");
    display(arr);
    printf("-------------------\n");
    set(&arr, 10, 1);
    printf("After Set\n");
    display(arr);
    printf("--------------------\n");
    printf("Max value is %d ", max(arr));

    return 0;
}