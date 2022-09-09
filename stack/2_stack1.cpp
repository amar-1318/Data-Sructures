#include<iostream>
#include<stdio.h>
using namespace std;
struct stack{
    int data;
    stack *next;
}*top=NULL;

void push(int x){
    struct stack *t;
    t = new stack;
    if(t==NULL){
        printf("Stack is FULL");
    }
    else{
        t->data = x;
        t->next =top;
        top = t;
    }
}

int pop(){
    struct stack *p;
    p = top;
    int x = -1;
    if(top==NULL){
        printf("Stack underflow ");
    }
    else{
        x = top->data;
        top = top->next;
        delete p;
    }
    return x;
}

void display(struct stack *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}



int main(){
    push(10);
    push(20);
    push(30);
    display(top);
    printf("\n");
    cout<<"Deleted element : "<<pop()<<endl;
    cout<<"Deleted element : "<<pop()<<endl;
    cout<<"Deleted element : "<<pop()<<endl;
    cout<<"Deleted element : "<<pop();
    cout<<endl;
    display(top);


    return 0;
}