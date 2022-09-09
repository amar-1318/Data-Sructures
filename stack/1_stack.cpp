#include<stdio.h>
#include<iostream>
// Stack using Array
using namespace std;
struct stack{
    int size;
    int top=-1;
    int *A;

};

void push(stack *st, int x){
    if(st->top==st->size-1){
        printf("Stack overflow ");
    }
    else{
        st->top++;
        st->A[st->top] = x;
    }

}
int pop(stack *st){
    int x;
    if(st->top==-1){
        printf("Stack uunderflow");
    }
    else{
        x = st->A[st->top];
        st->top--;
    }
    return x;
}

int peek(stack st, int pas){
    int x=-1;
    if(st.top-pas+1<0){
        printf("Invalid position");
    }
    else{
        x = st.A[st.top-pas+1];
    }
    return x;

}

void display(struct stack st){
    for(int i=st.top;i>=0;i--){
        printf("%d ",st.A[i]);
    }
}
int main(){
    struct stack st;
    printf("Enter the size\n");
    scanf("%d",&st.size);
    st.A = new int[st.size];
    push(&st,10);
    push(&st,20);
    push(&st,30);
    display(st);


    cout<<endl<<"popped element is : "<<pop(&st)<<endl;
    display(st);
    cout<<endl<<"The value at index 1 is : "<<peek(st,1);
    cout<<endl<<"The value at index 2 is : "<<peek(st,2);
    cout<<endl<<"The value at index 3 is : "<<peek(st,3);

    return 0;
}
