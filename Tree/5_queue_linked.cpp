/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<iostream>
using namespace std;

struct node{
    struct node *lchild;
    int data;
    struct node*rchild;
};

struct queue{
    int front;
    int rear;
    node **A;
    int size;
};
struct node *root=NULL;


void create(struct queue *q , int size){
    q->size = size;
    q->A = (node**)malloc(q->size*sizeof(node*));
    q->front = q->rear = 0;
}

void enqueue(struct queue *q ,node* x){
    if((q->rear +1)%q->size ==q->front){
        printf("Queue is full");
    }
    else{
        q->rear = (q->rear +1)%q->size;
        q->A[q->rear] = x;
        // printf("Inserted");
    }
}

node* dequeue(struct queue *q){
    node* x = NULL;
    if(q->front==q->rear){
        printf("Queue is NUll");
    }
    else{
        q->front = (q->front+1)%q->size;
        x = q->A[q->front];
    }
    return x;
}

void display(struct queue q){
    int i = q.front +1;
    do{
        printf("%d ",q.A[i]);
        i = (i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
}

int isempty(struct queue q){
    return q.front==q.rear;
}


void Tcreate(){
    struct node *p,*t;
    int x;
    struct queue q;
    create(&q,100);
    
    printf("\nEnter Root Value\n");
    scanf("%d", &x);
    root = (struct node*)malloc(sizeof(struct node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q,root);
    // printf("inserted in queue");
    while(!isempty(q)){
        p = dequeue(&q);
        printf("Enter Left Child\n");
        scanf("%d",&x);
        if(x!=-1){
            t = (struct node*)malloc(sizeof(struct node));
            t->data= x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter Right Child\n");
        scanf("%d",&x);
        if(x!=-1){
            t = (struct node*)malloc(sizeof(struct node));
            t->data= x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void preorder(struct node *p){
    if(p){
        printf("%d",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int main(){
    // struct queue st;
    Tcreate();   
    preorder(root);
    // dequeue(&q);
    return 0;
}
