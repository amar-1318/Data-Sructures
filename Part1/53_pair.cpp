#include <stdio.h>
#include <iostream>
using namespace std;
// Finding pair such as sum of two pair is equals
// This method takees O(n^2) time to execute

int pairr(int A[], int n, int key)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == key)
            {
                printf("(%d, %d)", A[i], A[j]);
            }
        }
    }

    return 0;
}

// Using hashing
int hashing(int A[], int n, int key)
{
    int j;
    int H[11] = {0};
    for (int i = 0; i < n; i++)
    {
        if (H[key - A[i]] != 0)
        {
            printf("(%d %d)", A[i], key - A[i]);
        }
        else
        {
            H[A[i]]++;
        }
    }
    return 0;
}
int main()
{
    int A[] = {6, 1, 4, 7, 2, 3, 8, 10};
    int n = 8;
    int key = 10;
    hashing(A, n, key);
    return 0;
}