#include<stdio.h>
#include<iostream>
using namespace std;
struct  stack
{
    int top = -1;
    char *A;
    int size;
};
int isempty(stack st){
    if(st.top==-1){
        return 1;
    }
    else return 0;
}

int isoperand(char x){
    if(x=='*' ||x=='/' ||x=='+' ||x=='-' ||x=='^' ||x=='(' ||x==')')
    {
        return 0;
    }
    else return 1;
}

void push(struct stack *st , char x){
    if(st->top == st->size -1){
        printf("Stack overflow");
    }
    else{
        st->top++;
        st->A[st->top] = x;
    }
}

int pop(struct stack *st){
    int x;
    if(st->top == -1){
        printf("Stack underflow");
    }
    else{
        x = st->A[st->top];
        st->A[st->top--];
    }
    return x;
}

int pre(char x){
    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*'||x=='/')
    {
        return 2;
    }
    else if(x=='^'){
        return 3;
    }
    else return -1;
}


char *postfix(char *exp){
    struct stack st;
    st.A = new char[20];
    // st.size = 20;
    char *result = new char[20];
    int i=0,j=0;
    while(exp[i]!='\0'){
        if(isoperand(exp[i])){
            result[j++] = exp[i++];
        }
        else if(exp[i]=='('){
            push(&st, exp[i++]);
        }
        else if(exp[i]==')'){
            while(st.A[st.top]!='('){
                result[j++] = st.A[st.top];
                pop(&st);
            }
            pop(&st);
            i++;
        }
        else{
            while(!isempty(st) && pre(exp[i])<= pre(st.A[st.top])){
                result[j++] = st.A[st.top];
                pop(&st);
            }
            push(&st, exp[i++]);
        }
    }
    while(!isempty(st)){
        result[j++] = st.A[st.top];
        pop(&st);
    }
    result[j] = '\0';
    return result;

}

int evaluation(char *ans){
    int x2 , x1, i , r;
    struct stack st;

    for(i = 0;ans[i]!='\0';i++){
        if(isoperand(ans[i])){
            push(&st , ans[i] - '0');
        }
        else{
            x2 = pop(&st);
            x1 = pop(&st);
            switch(ans[i]){
                case '+' : r = x1+x2;
                push(&st, r);
                break;

                case '-' : r = x1-x2;
                push(&st , r);
                break;

                case '*' : r = x1 * x2;
                push(&st , r);
                break;

                case '/' : r = x1/x2;
                push(&st , r);
                break;

            }
        }
    }
    return pop(&st);

}


int main(){    
    // char exp[] = "3*5+6/2-4";
    char exp[] = "6+5+3*4";
    char *ans = postfix(exp);
    cout<<"Postfix form of expression is : " <<endl;
    cout<<ans;

    cout<<endl<<"Evaluation of Postfix is"<<endl;
    cout<<evaluation(ans);
    return 0;
}