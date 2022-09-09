#include<stdio.h>
#include<iostream>
using namespace std;
// Duplicates finding and moving to end of an aray
//Leetcode solution

int duplicate(int A[], int n){
    int d=0;
    for(int i =1;i<n;i++){
        if(A[i-1]==A[i]){
            d++;
        }
        else{
            A[i-d]=A[i];
        }
    }
     for(int i=0;i<n-d;i++){
    printf("Array A[%d] is %d \n", i ,A[i]);

    }
    return n-d;

  
}
int main(){
    int A[]={3,4,5,6,6,7,8,8,9};
    int n = 9;
    printf("%d\n" , duplicate(A, n));
   


    return 0;
}