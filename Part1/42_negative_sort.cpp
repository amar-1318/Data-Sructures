// #include<stdio.h>
// #include<iostream>
// using namespace std;
// struct array{
//  int A[10];
//  int size;
//  int length;
//  };

// void swap(struct array *arr){
//     int i, j;
//     int temp;
//     for (i = 0, j = arr->length - 1; i < j; i++, j--)
//     {

//     temp =  arr->A[i];
//     arr->A[i]= arr->A[j];
//     arr->A[j]= temp;
//     }

// }
// void sort(struct array *arr){
// int i,j;
// i=0;
// j=arr->length-1;

// while(i<j){
//     while(arr->A[i]<0){
//         i++;
//     }
//     while(arr->A[j]>=0){
//         j--;
//     }
//     if(i<j){
//         swap(arr->A[i],arr->A[j]);
//     }
// }
// }
// void display(struct array arr)
// {
//     for (int i = 0; i < arr.length; i++)
//     {
//         printf("%d\n", arr.A[i]);
//     }
// }
// int main(){
// struct array arr{{1,-2,5,7,-9,10},{10},{6}};
// printf("Before sort\n");
// display(arr);

// sort(&arr);
// printf("After sort\n");

// display(arr);

//         return 0;
// }

int sort(int array[])
{
    int i = 0;
    int j = 6;
    for (int i = 0, j = 6; i < j; i++, j--)
    {
        if (array[i] < 0)
        {
            i++;
        }
        if (array[j] > 0)
        {
            j--;
        }
        if (i < j)
        {
            int temp;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    return 0;
}
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, -2, -4, -9, 10};
    sort(array);
    for (int i = 0; i < 7; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}