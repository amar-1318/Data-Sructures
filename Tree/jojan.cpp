#include<stdio.h>
#include<iostream>
using namespace std;
int fun(int a, int b){
    if((b-a)>(a&b) && b>7){
        a = a+2;
        a = a+3;
        return fun(a+1,b+2)+2+ a + fun(a, b);
    }
    return b-a+1;
}

int func(int a, int b, int c){
    b = c&b;
    for(c = 5; c<8;c++){
        a = (c+c)+a;
    }
    b = 12^b;
    return a+b;
}


int main(){
    
    return 0;
}