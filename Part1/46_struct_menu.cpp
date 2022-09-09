#include <stdio.h>
#include <iostream>
using namespace std;
//-----------------Insert-------------
struct array{
    int A[10];
    int size;
    int length;
};


int insert(struct array *array1, int index, int x)
{
    if (index >= 0 && index <= array1->length)
    {
        for (int i = array1->length; i > index; i--)
        {
            array1->A[i] = array1->A[i - 1];
        }
        array1->A[index] = x;
        array1->length++;
        for (int i = 0; i < array1->length; i++)
        {
            printf("%d\n", array1->A[i]);
        }
    }

    return 0;
}
//-------------------Delete---------------
int deletee(struct array *array1, int index)
{
    int i;
    int x;
    if (index >= 0 && index < array1->length)
    {
        x = array1->A[index];
        for (i = index; i < array1->length - 1; i++)
        {
            array1->A[i] = array1->A[i + 1];
        }
        array1->length--;
        for (int i = 0; i < array1->length; i++)
        {
            printf("%d\n", array1->A[i]);
        }
    }

    return 0;
}
//----------------Search-----------------
int binary(struct array array1, int key)
{
    int l = 0;
    int h = array1.length - 1;
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (key == array1.A[mid])
        {
            return mid;
        }
        else
        {
            if (key < array1.A[mid])
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
void display(struct array array1)
{
    for (int i = 0; i < array1.length; i++)
    {
        printf("A[%d] : %d \n", i, array1.A[i]);
    }
}
//--------------Merge-----------------------
void merge(struct array *array1, struct array *array2, struct array *array3)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < array1->length && j < array2->length)
    {
        if (array1->A[i] < array2->A[j])
        {
            array3->A[k++] = array1->A[i++];
        }
        else
        {
            array3->A[k++] = array2->A[j++];
        }
    }
    while (i < array1->length)
    {
        array3->A[k++] = array1->A[i++];
    }
    while (j < array2->length)
    {
        array3->A[k++] = array2->A[j++];
    }
    for(int i=0;i<10;i++){
        printf("A[%d] : %d\n",i,array3->A[i]);
    }
}

int main()
{ 
    struct array array1= {{2, 4, 8, 10, 12},{10},{5}};
    struct array array2 = {{1,2,3,4,5},{10},{5}};
    struct array array3;
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
        insert(&array1, index, x);
        break;
    case 2:
        printf("Enter index");
        scanf("%d", &index);
        deletee(&array1, index);
        break;
    case 3:
        printf("Enter element to be search\n");
        scanf("%d", &key);
        printf("The element u have searched is at index %d ", binary(array1, key));
        break;
    case 4:
        printf("The Elements in Array are \n");
        display(array1);
        break;
    case 5:
        printf("The merged Array is \n");
        merge(&array1, &array2, &array3);
        break;     
    }
    return 0;
}
