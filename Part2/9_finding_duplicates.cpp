#include <iostream>
#include <stdio.h>
using namespace std;
//Using simple method which took O(n^2) time to execute
int duplicates(char A[])
{
    int i, j;
    int count;
    for (i = 0; A[i] != '\0' - 1; i++)
    {
        count = 1;
        // if(A[i]!=-1){
        for (j = i + 1; A[j] != '\0'; j++)
        {
            if (A[i] == A[j])
            {
                count++;
                A[j] = -1;
            }
        }
        if (count > 1)
        {
            printf("%c is repeating %d times \n", A[i], count);
        }
        // }
    }
    return 0;
}
//Using hashing which takes only O(n) time to execute 

int hashing(char A[])
{
    int i, j;
    int H[26] = {0};
    for (i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            printf("%c is repeating %d times \n", i + 97, H[i]);
        }
    }
    return 0;
}

//Using bitwise method which save the memory
int bitwise(char A[])
{
    int x = 0, H = 0;
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i] - 97);
        if ((x & H) > 0)
        {
            printf("%c is repeating ", A[i]);
        }
        else
        {
            H = x | H;
        }
    }
    return 0;
}
int bitwoise(char A[]){
    int H=0,x=0;
    int i;
    for(i=0;A[i]!='\0';i++){
        x=1;
        x= x<<A[i]-97;
        if((x&H)>0){
            printf("%c is repeating \n",A[i]);
        }
        else{
            H = x|H;
        }
    }
}

int bitt(char A[]){
    int x=0,H=0;
    int i;
    for(i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0){
            printf("%c is repeating \n",A[i]);
        }
        else{
            H = x|H;
        }
    }
}
int main()
{
    char A[] = "finding";
    // duplicates(A);
    // hashing(A);
    bitt(A);
    return 0;
}