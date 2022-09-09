#include <iostream>
#include <stdio.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

class stack
{
private:
    node *top;

public:
    stack()
    {
        top = NULL;
    }

    void push(int x);
    int pop();
    void display();
};

void stack ::push(int x)
{
    struct node *t;
    t = new node;
    if (t == NULL)
    {
        printf("Stack is FULL");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int stack ::pop()
{
    int x = -1;
    if (top == NULL)
    {
        printf("Stack underflow ");
    }
    else
    {
        x = top->data;
        node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}

void stack::display()
{
    node *p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    printf("\n");
    cout << "Deleted element : " << st.pop() << endl;
    cout << "Deleted element : " << st.pop() << endl;
    st.display();

    return 0;
}