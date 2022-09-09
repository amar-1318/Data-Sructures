#include <stdio.h>
#include <iostream>
using namespace std;
template<class T>
class A
{
private:
    T a;
    T b;
    //What about float type data//If i want to use long int then what?
    //Ans: for then this class will not work then we have to create another class
    //Shall i write another class for just change of data type ?
    //No. We have to create genertic class for that
public:
    A(T a, T b);

    T add();
    // Note:Constructor
    //  A(){
    //     int c = a-b;
    //     return c;//We cant return in constructor
    //     // Basically constructor is used for initializing objects and allocate memory to objects
    //  }
~A()
{
    cout<<"Destruct";
}
};
template<class T>
A<T> ::A(T a, T b) // A constructor doesn,t have return type
{

    this->a = a; // This is pointer which points to current object
    this->b = b;
}
template<class T>

T A<T> ::add()
{
    return a + b;
}


int main()
{
    A<int> c{10, 12};
    cout << c.add()<<endl;
    //If i want float class
    A<float> c1{1.5,2.3};
    cout<<c1.add()<<endl;

    return 0;
}