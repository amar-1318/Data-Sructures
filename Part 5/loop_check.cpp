/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

struct node{
  int data;
  struct node * next;
}*first=NULL;

void insert(int pas, int x){
    struct node *t, *last;
    if(pas==0){
        t=new node;
        t->data= x;
        t->next = first;
        first = t;
    }
    else if(pas>0){
        last = first;
        for(int i=0;i<pas-1;i++){
            last= last->next;
        }
        t = new node;
        t->data = x;
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

int isloop(struct node *f){
    node *p,*q;
    p = q = f;
    do{
        p=p->next;
        q=q->next;
        q=q!=NULL ? q->next : NULL;
    }while(p&&q&&p!=q);
    if(p==q)return 1;
    else return 0;
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}


int main()
{
    insert(0,10);
    insert(1,20);
    insert(2,30);
    insert(3,40);
    insert(4,50);
    display(first);
    
    first->next->next->next->next->next = first;
    
    cout<<endl<<isloop(first);

    return 0;
}
