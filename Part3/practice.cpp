#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
// class matrix{
// private:
// int A[10];
// int n=4;
// public:
// void set(int i,int j,int x){
//     if(i==j){
//         A[i-1]=x;
//     }
// }
// void displayy(){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i==j){
//                 printf("%d ",A[i]);
//             }
//             else{
//                 printf("0 ");
//             }
//         }
//             printf("\n");
//     }
// }

// };

// int main(){
// matrix m;
// m.set(1,1,10);
// m.set(2,2,60);
// m.set(3,3,50);
// m.set(4,4,20);
// m.displayy();

//     return 0;
// }



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

void displayy(struct matrix m)
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
    struct matrix m;
    m.n = 4;
    int i, j, x;
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    printf("Enter the elements\n");

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
