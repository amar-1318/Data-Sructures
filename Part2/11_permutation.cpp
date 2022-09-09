#include <iostream>
#include <stdio.h>
using namespace std;
void perm(char A[], int k)
{
    static int x[10] = {0};
    static char res[10];
    int i;
    if (A[k] == '\0')
    {
        res[k] = '\0';
        printf("%s\n", res);
    }
    else
    {

        for (i = 0; A[i] != '\0'; i++)
        {
            if (x[i] == 0)
            {
                res[k] = A[i];
                x[i] = 1;
                perm(A, k + 1);
                x[i] = 0;
            }
        }
    }
}

int permutation(char A[], int k)
{
    int i, j;
    static int x[10] = {0};
    static char res[10];
    if (A[k] == '\0')
    {
        res[k] = '\0';
        printf("%s \n", res);
    }
    else
    {

        for (i = 0; A[i] != '\0'; i++)
        {
            if (x[i] == 0)
            {
                res[k] = A[i];
                x[i] = 1;
                permutation(A, k + 1);
                x[i] = 0;
            }
        }
    }

    return 0;
}

int perm1(char A[], int k)
{
    static int x[10] = {0};
    static char res[10];
    int i, j;
    if (A[k] == '\0')
    {
        res[k] = '\0';
        printf("%s\n", res);
    }

    else
    {

        for (i = 0; A[i] != '\0'; i++)
        {
            if (x[i] == 0)
            {
                res[k] = A[i];
                x[i] = 1;
                perm1(A, k + 1);
                x[i] = 0;
            }
        }
    }
    return 0;
}

int main()
{
    char A[] = "ABC";
    perm1(A, 0);

    return 0;
}