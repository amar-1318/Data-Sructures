#include <stdio.h>
#include <iostream>
using namespace std;
//Finding duplicates in unsorted Array
//This will take O(n^2)time to execute 

int unsort(int A[], int n)
{
    int j;
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        if (A[i] != -1)
        {

            for (int j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[j] = -1;
                }
            }
            if (count > 1)
            {
                printf("%d is repeating %d times \n", A[i], count);
            }
        }
    }
    return 0;
}

//If space is not a problem then we can use hashing technique also
//It will execute in only O(n) time 

int hashing(int A[], int n){
    int H[10]={0};
    for(int i=0;i<n;i++){
        H[A[i]]++;
    }
    for(int i=0;i<10;i++){
        if(H[i]>1){
            printf("%d is repeatng %d times \n",i,H[i]);
        }
    }

    return 0;
}

int main()
{
    int A[] = {3, 4, 3, 3, 7, 4, 8, 9, 1};
    int n = 9;
    hashing(A, n);

    return 0;
}