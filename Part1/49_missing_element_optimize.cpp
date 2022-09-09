#include<stdio.h>
#include<iostream>
using namespace std;
//Find missing element using hashing only in O(n) time 
//Last one was taking O(n^2) Time
//For unsorted array
int hashing(int A[], int n){
    int H[n]={0};
    for(int i=0;i<n;i++){
        H[A[i]]++;
    }
    for(int i=1;i<12;i++){
        if(H[i]==0){
            printf("Missing Elements are %d\n",i );
        }
    }
    return 0;
}
int main(){
 int A[]={3,7,4,9,12,6,1,11,2,10};
 int n = 10;
 hashing(A, n);
    return 0;
}