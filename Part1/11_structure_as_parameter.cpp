#include<stdio.h>
#include<stdlib.h>
using namespace std;
#include<iostream>
//Using call by value

// struct rectangle{
//     int length;//we have to initialize it outside the main function.
//     int breadth;
// };

// int area(struct rectangle r1){//we can send the structure itself //both length and breadth will pass as parameter // it will pass as single data member
//   return r1.length * r1.breadth;//seperate objet will be created 

// }
// int main(){
//    struct rectangle r{15,20};
// //    r.length = 15;
// //    r.breadth = 20;
//    printf("%d",area(r));


//     return 0;
// }
//Using call by Adress

// struct rectangle{
//     int length;
//     int breadth;
// };
// void changelength(struct rectangle *r1){
//     r1->length = 20;//Use arrow operator only while passing call by adress cause we have to change actual parameter also.
// }
// int main(){
//     struct rectangle r{15,20};
//     // printf("%d\n",r1.length);
//     changelength(&r);
//     printf("%d",r.length);
    
//     return 0;
// }
//Area of rectangle by call by value 
struct rectangle{

    int length;
    int breadth;
};
int fun(struct rectangle r1){
    return r1.length * r1.breadth;
}
int main(){
  struct rectangle r{10,15};
  printf("The area of rectangle is %d ",fun(r) );

    return 0;
}