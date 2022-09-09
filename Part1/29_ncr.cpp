#include<stdio.h>
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)return 1;
    return fact(n-1)*n;
}

int ncr(int n, int r){
    int num, den;
    num = fact(n);
    den = fact(r)*fact(n-r);

    return num/den;
}


int c(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return c(n-1 , r-1) + c(n-1, r);
    }
}




int main(){
   printf("%d",ncr(4,2));
   printf("%d",c(4,2));


    return 0;
}