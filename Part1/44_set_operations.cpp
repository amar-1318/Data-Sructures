#include <stdio.h>
#include <iostream>
using namespace std;
//--------------------------Union-------------------------
int merge(int array1[], int array2[], int n1, int n2, int array3[])
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
            if (array2[j] < array1[i])
            {
                array3[k++] = array2[j++];
            }
            else
            {
                array3[k++] = array1[i++];
                j++;
            }
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
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", array3[i]);
    }
    return 0;
}

//----------------------------Intersection--------------------
int intersection(int array1[], int array2[], int n1, int n2, int array3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (array1[i] < array2[j])
        {
            i++;
        }
        else
        {
            if (array2[j] < array1[i])
            {
                j++;
            }
            else
            {
                array3[k++] = array1[i++];
                j++;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", array3[i]);
    }
    return 0;
}
//------------------------Difference-----------------------------
int difference(int array1[], int array2[], int n1, int n2, int array3[])
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
            if (array2[j] < array1[i])
            {
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", array3[i]);
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
int binary(int array1[],int key, int n1){
      int l=0;
      int h=n1-1;
      while(l<h){
          int mid = (l+h)/2;
          if(key==array1[mid]){
              return mid;
          }
          else{
              if(key<array1[mid]){
                  h = mid-1;
              }
              else{
                  l = mid+1;
              }

          }
      }
      return 0;
}

int insert(int array1[], int index, int x, int n1){
    if(index>=0&&index<=n1){
        for(int i=n1;i>index;i--){
            array1[i]=array1[i-1];
        }
        array1[index]=x;
        n1++;
        for (int i = 0; i < n1; i++)
        {
            printf("%d\n", array1[i]);
        }
    }

return 0;
}
int main()
{
    int array1[] = {2, 3, 6, 8, 10};
    int n1 = 5;
    int array2[] = {1, 3, 5, 8, 12};
    int n2 = 5;
    int array3[10];
    int n3 = n1 + n2;
    // merge(array1, array2, n1, n2, array3);
    // intersection(array1, array2, n1,n2,array3);
    // difference(array1, array2, n1, n2, array3);
    // deletee(array1, 2, n1);
    // insert(array1,2,25,n1);
    printf("%d",binary(array1,6,n1));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", array1[i]);
    // }
    return 0;
}