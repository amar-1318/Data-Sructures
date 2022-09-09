#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
    struct node *lchild;
    int data;
    struct node *rchild;

};

struct queue{
    int front;
    int rear;
    node **A;
    int size;
};

void create(struct queue *q){
    q->size = 5;
    q->A = (node**)malloc(q->size*sizeof(node*));
    q->front = q->rear = 0;

}

void enqueue(struct queue *q, node* x){
    if((q->rear+1)%q->size==q->front){
        printf("Queue is full");
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->A[q->rear] = x;
    }
}
node* dequeue(struct queue *q){
    node* x = NULL;
    if(q->front==q->rear){
        printf("Queue is empty");
    }
    else{
        q->front = (q->front+1)%q->size;
        x = q->A[q->front];
    }
    return x;
}

int main(){



    return 0;
}