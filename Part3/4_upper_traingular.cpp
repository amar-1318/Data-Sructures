#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct matrix
{
    int *A;
    int n;
};
void set(struct matrix *m, int i, int j, int x)
{
    if (i <= j)
    {
        m->A[(i - 1) * m->n - (i - 2) * (i - 1) / 2 + j - i] = x;
    }
}
void displayy(struct matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i <= j)
            {
                printf("%d ", m.A[(i - 1) * m.n - (i - 2) * (i - 1) / 2 + j - i]);
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
    struct matrix m;
    int i, j, x;
    printf("Enter dimensions\n");
    scanf("%d", &m.n);

    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    printf("\nEnter the elements\n");

    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            set(&m, i, j, x);
        }
    }

    printf("\n\n");
    displayy(m);

    return 0;
}