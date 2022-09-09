#include<iostream>
#include<stdio.h>
using namespace std;
struct stack{
    int data;
    stack *next;
}*top=NULL;

void push(char x){
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


int isoperand(char exp){
    if(exp=='+'||exp=='-'||exp=='*'||exp=='/'){
        return 0;
    }
    else return 1;
}

int isempty(){
    if(top==NULL){
        return 1;
    }
    return 0;
}

int pree(char x){
    if(x == '^')
        return 3;
    else if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*'|| x=='/'){
        return 2;
    }
    return 0;
}

char * postfixx(char *exp){
    struct stack st;
    char *postfix = new char[6];
    int i=0,j=0;
    while(exp[i]!='\0'){
        if(isoperand(exp[i])){
            postfix[j++] = exp[i++];
        }
        else if(exp[i]=='('){
            push(exp[i++]);
        }
        else if(pree(exp[i]) > pree(top->data))
        {
            push(exp[i++]);
        }
        else{
            postfix[j++] = pop();
        }

    }
    while(!isempty()){
        postfix[j++] = pop();
    }
    postfix[j]='\0';
    return postfix;
}



int main(){
    char exp[] = "a+b+c*d";
    // st.A = new char[6];
    push('#');

    cout<<postfixx(exp);


    return 0;
}