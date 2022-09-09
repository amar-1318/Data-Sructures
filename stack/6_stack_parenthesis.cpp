#include<stdio.h>
#include<iostream>
using namespace std;
struct stack{
    int size;
    int top=-1;
    char * A;
};

void push(struct stack *st, char x){
    if(st->top==st->size-1)printf("stack is overflow");
    else{
        st->top++;
        st->A[st->top]=x;
    }
}
char pop(struct stack *st){
    int x=  -1;
    if(st->top==-1)printf(" stack is underflow ");
    else{
        x = st->A[st->top];
        st->top--;
    }

    return x;
}

void display(struct stack *st){
    for(int i =st->top;i>=0;i-- ){
        printf("%c ",st->A[i]);
    }
}

string ispara(char * exp){
    struct stack st;
    st.size = 10;
    st.top = -1;
    st.A= new char[st.size];
    for(int i=0; exp[i]!='\0';i++){
        if(exp[i]=='(')push(&st,exp[i]);
        else if(exp[i]==')'){
            if(st.top==-1)return "Para is not balanced";
            pop(&st);
        }
    }
    if(st.top==-1)return "para is balanced";
    else { 
        return "para is not balanced";
    }

}
int main(){
    int A[] = {1,2,3};
    char exp[] = "(((a+b)))";
    // st.size = 6;
    // st.A = new char[st.size];
    // cout<<"Popped element is : "<<pop(&st)<<endl;
    // display(&st);
    cout<<ispara(exp);


    return 0;
}