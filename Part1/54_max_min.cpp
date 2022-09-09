#include<stdio.h>
#include<iostream>
using namespace std;
int max_min(int A[],int n){
    int min = A[0];
    int max = A[0];
    int i, j;
    for(i=1;i<n;i++){
        if(min>A[i]){
            min = A[i];
        }
        else{
            if(max<A[i]){
                max = A[i];
            }
        }
    }
    printf("Max is : %d\nMin is : %d",max,min);
    return 0;
}
int main(){
    int A[]={5,2,1,10,22,-1,4,9};
    int n=8;
    max_min(A,n);


    return 0;
}