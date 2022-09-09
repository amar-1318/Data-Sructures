#include <stdio.h>
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};

int binary(struct array arr, int key)
{
    int l = 0;
    int h = arr.length;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else
        {
            if (key < arr.A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
    return 0;
}

int Rbinary(int A[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else
        {
            if (key < A[mid])
            {
                h = mid - 1;
                return Rbinary(A, l, mid - 1, key);
            }
            else
            {
                l = mid + 1;
                return Rbinary(A, mid + 1, h, key);
            }
        }
    }
    return -1;
}

int newbinary(struct array arr, int key)
{
    int l = 0;
    int h = arr.length;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else
        {
            if (key < arr.A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}

int newRbinary(int A[], int l, int h, int key){
    if(l<=h){
        int mid = (l+h)/2;
        if(key==A[mid]){
            return mid;
        }
        else{
            if(key<A[mid]){
                h = mid-1;
                return newRbinary(A, l, mid-1,key);
            }
            else{
                l = mid+1;
                return newRbinary(A, mid+1,h,key);
            }
        }
    }
        return -1;
}

int main()
{
    struct array arr
    {
        {1, 2, 3, 8, 9, 10, 23, 56}, {10}, { 8 }
    };

    // printf("%d", newbinary(arr, 56));
    printf("%d", newRbinary(arr.A, 0, arr.length, 10));

    return 0;
}