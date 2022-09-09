#include <stdio.h>
#include <stdlib.h>
// int main(){
//    int a =10;
//    int *p;
//    p = &a;
//    printf("Value of a is %d",a);
//    printf("The value of p is %d",*p);//Derefrencing
//     int *p;
//     p = (int *)malloc(5*sizeof(int)); //Using malloc we can allocate memory in heap
//     // p = new int[5]; In c++ language
//     p[0]=1;
//     p[1]=2;
//     p[2]=3;
//     p[3]=4;
//     p[4]=5;

// for(int i=0;i<5;i++){
//     printf("The value of p[%d] is %d\n",i,p[i]);
// }
// free(p);//we have to free it after use cause it is dynamic
// //When program runs and ends heap memory already deleted
//     return 0;
// }

// Array Pointers
// int main(){
//     int A[5] = {1,2,3,4,5};
//     int *p;
//     p = A;//We dont have to add & cause name of array itself A
//     // p=&A is wrong
//     //p= &A[0] either u can use

//     for(int i=0;i<5;i++){
//         printf("The value of A[%d] is %d\n",i ,p[i] );//Accessing Array using pointers
//     }

//     return 0;
// }
