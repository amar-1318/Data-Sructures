#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p[i]);
    }
    int *q;
    q = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    free(p);
    p=q;
    q=NULL;
    p[5]=6;
    p[6]=6;
    p[7]=6;
    p[8]=6;
    p[9]=6;
    for(int i=0;i<10;i++){
        printf("%d ",p[i]);
    }

    return 0;
}