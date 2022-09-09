#include <stdio.h>
#include <iostream>
using namespace std;
// Area and perimeter of rectangle
// using monolithic programming
//-------------------------------------------
//  int main(){
//      int length, breadth;
//      cout<<"Enter the length of rectangle "<<endl;
//      cin>>length;
//      cout<<"Enter the breadth of rectangle "<<endl;
//      cin>>breadth;
//      int area = length* breadth;
//      int peri = 2*(length+breadth);
//      cout<<"Area is"<<area<<endl;
//      cout<<"Perimeter is"<<peri<<endl;

//------------------------------------
// Using modular
// int area(int length, int breadth){
//     return length * breadth;
// }
// int peri(int length, int breadth){
//     int p;
//     p = 2*(length + breadth);
//     return p;
// }
// int main(){
//   int length , breadth;
//   cout<<"Enter the length ";
//   cin>>length;
//   cout<<"Enter the breadth ";
//   cin>>breadth;
//   cout<<"The area is "<<area(length,breadth)<<endl;
//   cout<<"The perimeter is "<<peri(length,breadth)<<endl;

//-----------------------------------------
// Using structure and function
struct rectangle
{

    int length;
    int breadth;
};

int area(struct rectangle r)
{
    return r.length * r.breadth;
}
int peri(struct rectangle r)
{ // In cpp we can write only rectangle r also ...
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}
void initialize(struct rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int main()
{
    rectangle r = {0, 0};

    int l, b;
    cout << "Enter the length ";
    cin >> l;
    cout << "Enter the breadth ";
    cin >> b;
    initialize(&r, l, b);
    cout << "The area is " << area(r) << endl;
    cout << "The perimeter is " << peri(r) << endl;

    return 0;
}