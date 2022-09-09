#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;
class rectangle{
// private:
public:
    int length;
    int breadth;
rectangle(int l,int b){//This function is modifying main func 
    length = l;
    breadth = b;
}
int area(){
    return length*breadth;
}
};
int main(){
 rectangle r(10,5);//it does the job of initializing the objrct//automatically called when object is created 
//  r.initialize(10,5)
 r.area();
 printf("Area of rectangle length %d and breadth %d is %d\n",r.length,r.breadth,r.area());         
}