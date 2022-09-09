#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    /* data */
};

// int main(){
//     rectangle r;
//     rectangle *p=&r;
//        p->length=10;//Arrow operator in cpp
//        p->breadth=15;
//     cout<<p->breadth<<endl;
//     cout<<p->length;

//     return 0;
// }

// Creating Objects in heap using malloc

int main()
{
    struct rectangle *ptr;
    ptr = (struct rectangle *)malloc(sizeof(struct rectangle));

    // Assigning method
    ptr->length = 15;
    ptr->breadth = 20;

    // Taking input of values
    ptr->length;
    cin >> ptr->length;
    ptr->breadth;
    cin >> ptr->breadth;
    cout << ptr->length << endl;
    cout << ptr->breadth;

    return 0;
}