#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void initialize(struct rectangle *r){//This function is modifying main func 
    r->length = 20;
    r->breadth = 30;
}
int area(struct rectangle r){
    return r.length*r.breadth;
}
int main(){
 struct rectangle r;
 initialize(&r);
 printf("Area of rectangle length %d and breadth %d is %d\n",r.length,r.breadth,area(r));         
}