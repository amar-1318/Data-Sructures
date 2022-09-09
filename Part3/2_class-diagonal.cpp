#include <stdio.h>
#include <iostream>
using namespace std;
class matrix
{
private:
    int n;
    int *A;

public:
    matrix(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x);
    void display()
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    printf("%d ", A[i]);
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
    ~matrix()
    {
        delete[] A;
    }
};
void matrix ::set(int i, int j, int x)
{

    if (i == j)
    {
        A[i - 1] = x;
    }
}

int main()
{
    matrix d(4);
    d.set(1, 1, 10);
    d.set(2, 2, 15);
    d.set(3, 3, 20);
    d.set(4, 4, 25);
    d.display();

    return 0;
}