
#include <stdio.h>
#include <iostream>
using namespace std;
// Inserting element in sorted array so the array should remain sorted
struct array
{
    int A[10];
    int size;
    int length;
};

void insert(struct array *arr, int x)
{
    int i = arr->length - 1;

    while (arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
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
    printf("Before insert\n");
    display(arr);
    insert(&arr, 7);
    printf("After insert\n");
    display(arr);
    return 0;
}