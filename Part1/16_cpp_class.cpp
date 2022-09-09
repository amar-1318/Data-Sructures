#include <stdio.h>
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    { // Actual constructor
        length = 0;
        breadth = 0;
    }
    rectangle(int l, int b)
    { // Parameterised constructor
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int peri()
    {
        return 2 * (length + breadth);
    }
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }

    ~rectangle()
    {
        cout << "Destructor"; // Once the main function is end the object is Destroyed
    }
};

int main()
{
    rectangle r{10, 5};
    rectangle *ptr = &r; // Using pointers which points to object
    cout << "Area is " << (*ptr).area() << endl;
    cout << "Perimeter is " << (*ptr).peri() << endl;

    // cout<<"Area is "<<r.area()<<endl;
    // cout<<"Perimeter is "<<r.peri()<<endl;

    return 0;
}