#include<stdio.h>
// #include<iostream>
int main(){
     int A[5];
     A[0] = 11;
     A[1] = 12;
     A[2] = 13;
     A[3] = 14;
     A[4] = 15;
     int i;
     for(i=0;i<5;i++){
     printf("The value of A[%d] is %d\n " , i,A[i]);
     }
    // cout<<sizeof(A);
    return 0;
}