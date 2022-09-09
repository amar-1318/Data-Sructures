//------------------Pass by value or call by value----------

// #include<stdio.h>
// void swap(int x, int y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//    int a,b;
//    a = 10;
//    b = 20;
//    swap(a,b);
//    printf("a = %d and b = %d",a,b);
// }

//---------------Pass by adress--------------------


// #include<stdio.h>
// void swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//    int a,b;
//    a = 10;
//    b = 20;
//    swap(&a,&b);
//    printf("a = %d and b = %d",a,b);
//    return 0;
// }


//------------Call by reference--------------
#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
   int a,b;
   a = 10;
   b = 20;
   swap(a,b);
   printf("a = %d and b = %d",a,b);
   return 0;
}