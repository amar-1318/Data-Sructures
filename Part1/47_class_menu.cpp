// #include <stdio.h>
// #include <iostream>
// using namespace std;
// //-----------------Insert-------------
// class array{
// private:
//     int A[10];
//     int size;
//     int length;

// public:

// int insert(int index, int x)
// {
//     if (index >= 0 && index <= length)
//     {
//         for (int i = length; i > index; i--)
//         {
//             A[i] = A[i - 1];
//         }
//         A[index] = x;
//         length++;
//         for (int i = 0; i < length; i++)
//         {
//             printf("%d\n", A[i]);
//         }
//     }

//     return 0;
// }
// //-------------------Delete---------------
// int deletee(int index)
// {
//     int i;
//     int x;
//     if (index >= 0 && index < length)
//     {
//         x = A[index];
//         for (i = index; i < length - 1; i++)
//         {
//             A[i] = A[i + 1];
//         }
//         length--;
//         for (int i = 0; i < length; i++)
//         {
//             printf("%d\n", A[i]);
//         }
//     }

//     return 0;
// }
// //----------------Search-----------------
// int binary(int key)
// {
//     int l = 0;
//     int h = length - 1;
//     while (l < h)
//     {
//         int mid = (l + h) / 2;
//         if (key == A[mid])
//         {
//             return mid;
//         }
//         else
//         {
//             if (key < A[mid])
//             {
//                 h = mid - 1;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }
//         printf("The value you have searched is %d \n", mid);
//     }
//     return 0;
// }
// //-------------------Display-------------
// void display()
// {
//     for (int i = 0; i < length; i++)
//     {
//         printf("A[%d] : %d \n", i, A[i]);
//     }
// }
// //--------------Merge-----------------------
// void merge(array array2,array array3)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i <length && j < array2.length)
//     {
//         if (A[i] < array2.A[j])
//         {
//             array3.A[k++] = A[i++];
//         }
//         else
//         {
//             array3.A[k++] = array2.A[j++];
//         }
//     }
//     while (i < length)
//     {
//         array3.A[k++] =A[i++];
//     }
//     while (j < array2.length)
//     {
//         array3.A[k++] = array2.A[j++];
//     }
//     for(int i=0;i<10;i++){
//         printf("A[%d] : %d\n",i,array3.A[i]);
//     }
// }
// };
// int main()
// { 
//      array array1={2, 4, 8, 10, 12};
//      array array2 = {1,2,3,4,5};
//      array array3;
//     int n1 = 5;
//     int n2=5;
//     int ch;
//     int x, index;
//     int key;
//     printf("Menu\n");
//     printf("1. Insert\n");
//     printf("2. Delete\n");
//     printf("3. Search\n");
//     printf("4. Display\n");
//     printf("5. Merge\n");

//     printf("Enter your choice\n");
//     scanf("%d", &ch);

//     switch (ch)
//     {
//     case 1:
//         printf("Enter an element and index");
//         scanf("%d%d", &x, &index);
//         array1.insert(index, x);
//         break;
//     case 2:
//         printf("Enter index");
//         scanf("%d", &index);
//         array1.deletee(index);
//         break;
//     case 3:
//         printf("Enter element to be search\n");
//         scanf("%d", &key);
//         printf("The element u have searched is at index %d ", binary(key));
//         break;
//     case 4:
//         printf("The Elements in Array are \n");
//         array1.display();
//         break;
//     case 5:
//         printf("The merged Array is \n");
//         merge(array2, array3);
//         break;     
//     }
//     return 0;
// }
