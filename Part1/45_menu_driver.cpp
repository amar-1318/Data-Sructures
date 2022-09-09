#include <stdio.h>
#include <iostream>
using namespace std;
//-----------------Insert-------------

int insert(int array1[], int index, int x, int n1)
{
    if (index >= 0 && index <= n1)
    {
        for (int i = n1; i > index; i--)
        {
            array1[i] = array1[i - 1];
        }
        array1[index] = x;
        n1++;
        for (int i = 0; i < n1; i++)
        {
            printf("%d\n", array1[i]);
        }
    }

    return 0;
}
//-------------------Delete---------------
int deletee(int array1[], int index, int n1)
{
    int i;
    int x;
    if (index >= 0 && index < n1)
    {
        x = array1[index];
        for (i = index; i < n1 - 1; i++)
        {
            array1[i] = array1[i + 1];
        }
        n1--;
        for (int i = 0; i < n1; i++)
        {
            printf("%d\n", array1[i]);
        }
    }

    return 0;
}
//----------------Search-----------------
int binary(int array1[], int key, int n1)
{
    int l = 0;
    int h = n1 - 1;
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (key == array1[mid])
        {
            return mid;
        }
        else
        {
            if (key < array1[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        printf("The value you have searched is %d \n", mid);
    }
    return 0;
}
//-------------------Display-------------
void display(int array1[], int n1)
{
    for (int i = 0; i < n1; i++)
    {
        printf("A[%d] : %d \n", i, array1[i]);
    }
}
//--------------Merge-----------------------
void merge(int array1[], int array2[], int n1, int n2, int array3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (array1[i] < array2[j])
        {
            array3[k++] = array1[i++];
        }
        else
        {
            array3[k++] = array2[j++];
        }
    }
    while (i < n1)
    {
        array3[k++] = array1[i++];
    }
    while (j < n2)
    {
        array3[k++] = array2[j++];
    }
    for(int i=0;i<10;i++){
        printf("A[%d] : %d\n",i,array3[i]);
    }
}

int main()
{
    int array1[] = {2, 4, 8, 10, 12};
    int array2[] = {1,2,3,4,5};
    int array3[10];
    int n1 = 5;
    int n2=5;
    int ch;
    int x, index;
    int key;
    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Display\n");
    printf("5. Merge\n");

    printf("Enter your choice\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter an element and index");
        scanf("%d%d", &x, &index);
        insert(array1, index, x, n1);
        break;
    case 2:
        printf("Enter index");
        scanf("%d", &index);
        deletee(array1, index, n1);
        break;
    case 3:
        printf("Enter element to be search\n");
        scanf("%d", &key);
        printf("The element u have searched is at index %d ", binary(array1, key, n1));
        break;
    case 4:
        printf("The Elements in Array are \n");
        display(array1, n1);
        break;
    case 5:
        printf("The merged Array is \n");
        merge(array1, array2, n1,n2,array3);
        break;
    }

    return 0;
}
