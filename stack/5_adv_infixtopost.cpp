#include<stdio.h>
#include<iostream>
using namespace std;
struct stackk{
    int top = -1;
    char *A;
    int size;

};
int isempty(struct stackk st){
    if(st.top==-1){
        return 1;
    }
    else return 0;
}

void push(struct stackk *st, char x){
    if(st->top == st->size-1){
        printf("Stack overflow");
    }
    else{
        st->top++;
        st->A[st->top] = x;
    }
} 
void pop(struct stackk *st){
    if(st->top==-1){
        printf("Stack underflow");
    }
    else{
        st->A[st->top--];
    }
}

int pre(char x){

    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*'|| x=='/'){
        return 2;
    }
    else if(x=='^'){
        return 3;
    }
    return -1;
}
int isoperand(char exp){
    if(exp=='+'||exp=='-'||exp=='*'||exp=='/' ||exp=='('|| exp=='^'|| exp==')'){
        return 0;
    }
    else return 1;
}

char * postfixx(char *exp){
    struct stackk st;
    // st = ()
    // st = new stack[];
    char *result = new char[30];
    st.A = new char[30];
    int i=0,j=0;
    while(exp[i]!='\0'){
        if(isoperand(exp[i])){
            result[j++] = exp[i++];
        }
        else if(exp[i]=='('){
            push(&st, exp[i++]);
        }
        else if(exp[i] == ')') {
            while(st.A[st.top]!='('){
                result[j++] = st.A[st.top];
                pop(&st);
            }
            pop(&st);
            i++;
        }
        
        else{
            while(!isempty(st) && pre(exp[i]) <= pre(st.A[st.top])){
                result[j++] = st.A[st.top];
                pop(&st);
            }
            push(&st, exp[i++]);
        }
 
    }
    while(!isempty(st)) {
        result[j++] = st.A[st.top];
        pop(&st);
    }
    result[j] = '\0';
    return result;
}



int main(){
    struct stackk st;
    char exp[] = "(1+2)*4^6";
    cout<<postfixx(exp);
    return 0;
}



