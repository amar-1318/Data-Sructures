#include <stdio.h>
#include <iostream>
using namespace std;
string strings(char A[], char B[])
{
    int i, j;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';
    for (i = 0, j = 0; A[i] != '\0', B[j] != '\0'; i++, j++)
    {
        if (A[i] == B[j]){
        return "Yes";
        }
    }
    return "No";
}

int main()
{
    char A[] = "nitit";
    char B[6];
   cout<<strings(A,B);
    return 0;
}
