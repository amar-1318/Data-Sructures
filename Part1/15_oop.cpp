#include <stdio.h>
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int peri()
    { // In cpp we can write only rectangle r also ...
        int p;
        p = 2 * (length + breadth);
        return p;
    }
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
};
int main()
{
    int l, b;
    rectangle r = {10, 5};

    // cout << "Enter the length ";
    // cin >> l;
    // cout << "Enter the breadth ";
    // cin >> b;
    // initialize(&r, l, b);
    cout << "The area is " << r.area() << endl;
    cout << "The perimeter is " << r.peri() << endl;

    return 0;
}