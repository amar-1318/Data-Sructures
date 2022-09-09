#include<stdio.h>
#include<iostream>
using namespace std;

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

struct queue{
    int front;
    int end;
    node **A;
    int size;
};
void create(struct queue *q, int size){
    q->size = size;
    q->A = (node**)malloc(q->size*sizeof(node*));
    q->front = q->end = 0;
}

void enqueue(struct queue *q , node*x){
    // We are going to use circular queue in this code
    if((q->end+1)%q->size==q->front){
        printf("Queue is full");
    }
    else{
        q->end = (q->end+1)%q->size;
        q->A[q->end] = x;
    }
}

node* dequeue(struct queue *q){
    node*x = NULL;
    if(q->front==q->end){
        printf("Queue is empty");
    }
    else{
        q->front = (q->front+1)%q->size;
        x = q->A[q->front];
    }
    return x;
}
int isempty(struct queue q){
    return q.front==q.end;
}

void Tcreate()
{
    node *p, *t;
    int x;
    struct queue q;
    create(&q,10);
    printf("Enter value of root node of \n");
    scanf("%d",&x);
    root = (node*)malloc(sizeof(node));
    root->data = x;
    root->lchild=root->rchild = NULL;
    enqueue(&q,root);
    while(!isempty(q)){
        p = dequeue(&q);
        printf("Enter left child of %d \n",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q,t);
        }
        printf("Enter right child of %d \n",p->data);
        scanf("%d", &x);
        if(x!=-1){
            t = new node;
            t->data = x;
            t->rchild = t->lchild = NULL;
            p->rchild =t;
            enqueue(&q,t);
        }
    }
}

void preorder(struct node *p){
    if(p){
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(struct node *p){
    if(p){
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}

void postorder(struct node *p){
    if(p){
    postorder(p->lchild);
    postorder(p->rchild);
    printf("%d ",p->data);
    }
}
int main(){
    Tcreate();
    printf("\nPreorder is : \n");
    preorder(root);
    printf("\nInorder is : \n");
    inorder(root);
    printf("\nPostorder is : \n");
    postorder(root);
    return 0;
}