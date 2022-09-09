#include<stdio.h>
#include<iostream>
using namespace std;
//Finding duplicates and counting repeation int sorted array

int duplicate(int A[],int n){
    int j;
    for(int i=0;i<n-1;i++){
    if(A[i]==A[i+1]){
        j = i+1;
        while(A[i]==A[j])j++;
        printf("%d is repeating %d times \n",A[i],j-i);
        i = j-1;
    }

    }
    return 0;
}

//Finding duplicates and counting repeation int sorted array using hashing
int hashing(int A[], int n){
    int H[6]={0};
    for(int i=0;i<n;i++){
        H[A[i]]++;
    }
    for(int i=0;i<6;i++){
        if(H[i]>1){
            printf("%d is repeating %d times \n",i,H[i]);
        }
    }


    return 0;
}


int main(){
    int A[]={1,2,2,3,3,3,4,5};
    int n=8;
    printf("Without using hashing\n");
    duplicate(A,n);
    printf("With using hashing \n");
    hashing(A,n);


    return 0;
}