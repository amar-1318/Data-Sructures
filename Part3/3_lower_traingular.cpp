#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
struct matrix
{
    int *A;
    int n;
};

void set(struct matrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->A[i * (i - 1) / 2 + j - 1] = x;
    }
}
void diplay(struct matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                printf("%d ", m.A[i * (i - 1) / 2 + j - 1]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int i, j, x;
    struct matrix m;
    printf("Enter the Dimension");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    // printf("Enter the elements\n");
    // scanf("%d",&x);
    set(&m,1,1,10);
    set(&m,2,1,13);
    set(&m,2,2,15);
    set(&m,3,1,13);
    set(&m,3,2,13);
    set(&m,3,3,13);
    // for (i = 1; i <= m.n; i++)
    // {
    //     for (j = 1; j <= m.n; j++)
    //     {
    //         scanf("%d", &x);
    //         set(&m, i, j, x);
    //     }
    // }
    printf("\n\n");
    diplay(m);

    return 0;
}




