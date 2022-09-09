// #include<stdio.h>
// #include<iostream>
// using namespace std;

// // void display(struct array arr3)
// // {
// //     for (int i = 0; i < arr3.length; i++)
// //     {
// //         printf("%d\n", arr3.A[i]);
// //     }
// // }
// void merge(int array1[],int array2[], int n1, int n2, int array3[]){
//   int i=0;
//   int j=0;
//   int k = 0;

//   while(i<n1&&j<n2)
//   {
//       if(array1[i]<array2[j] || array1[i]==array2[j]){

//           array3[k++]=array1[i++];
//       }
//       else{
//           array3[k++]=array2[j++];
//       }

//   }
//   while(i<n1){
//       array3[k++]=array1[i++];
//   }
//   while(j<n2){
//       array3[k++]=array2[j++];
//   }
// }

// int main(){
//  int array1[5]={2,4,6,8,10};
//  int n1 = 5;
//  int array2[5]={3,6,8,10,20};
//  int n2 = 5;
//  int array3[10];
//  int n3 = 10;
//  merge(array1, array2 , n1, n2, array3);

//  for(int i=0;i<10;i++){
//  printf("%d\n",array3[i]);

//  }
//     return 0;
// }

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
}

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int array1[] = {2, 6, 8, 10, 12, 14};
    int n1 = 6;
    int array2[] = {1, 3, 5, 7, 9, 11};
    int n2 = 6;
    int array3[10];
    int n3 = 10;
    merge(array1, array2, n1, n2, array3);
    for (int i = 0; i < 10; i++)
    {

        printf("%d\n", array3[i]);
    }

    return 0;
}