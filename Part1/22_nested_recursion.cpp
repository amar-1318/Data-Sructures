#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));//A;; funtion calls are finished when 101 comes ie ans will 91 in every case value under 100
    }
}
int main(){
int r;
r = fun(100);   
printf("%d",r);


    return 0;
}