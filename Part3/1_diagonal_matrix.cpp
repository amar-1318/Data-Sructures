#include <stdio.h>
#include <iostream>
using namespace std;
struct matrix
{
    int A[10];
    int n;
};

void set(struct matrix *m, int i, int j, int x)
{
    if (i == j)
    {
        m->A[i - 1] = x;
    }
}
void display(struct matrix m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                printf("%d ", m.A[i]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int get(struct matrix m, int i,int j){
    if(i==j){
        return m.A[i-1];
    }
    return 0;
}

int main()
{
    struct matrix m;
    m.n = 4;
    set(&m, 1, 1, 10);
    set(&m, 2, 2, 15);
    set(&m, 3, 3, 20);
    set(&m, 4, 4, 25);
    printf("%d \n",get(m,2,2));
    display(m);
    return 0;
}