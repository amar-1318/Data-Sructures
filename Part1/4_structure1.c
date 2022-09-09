#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
} r1;
// struct rectangle r1;


int main(){

r1.length = 5;
r1.breadth = 2;
int area = r1.length * r1.breadth;
printf("Area of rectangle is %d and size is %d ",area,sizeof(r1) );


    return 0;
}