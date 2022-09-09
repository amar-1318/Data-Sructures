#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("Value of A[%d] is %d\n", i, arr.A[i]);
    }
}
// void insert(struct array *arr, int index, int x)
// {
//     if (index >= 0 && index <= arr->length)
//     {
//         for (int i = arr->length; i > index; i--)
//         {
//             arr->A[i] = arr->A[i - 1];
//         }
//         arr->A[index] = x;
//         arr->length++;
//     }
// }
void insert(struct array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

void deletee(struct array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
}

int main()
{
    struct array arr
    {
        {1, 2, 3, 4, 5}, {10}, { 5 }
    };
    insert(&arr, 3, 10);
    // deletee(&arr, 0);
    display(arr);
    return 0;
}