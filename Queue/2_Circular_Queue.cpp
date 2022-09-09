#include<iostream>
#include<stdio.h>
using namespace std;
struct queue{
    int front;
    int rear;
    int *A;
    int size;
};

void create(struct queue *q){
    q->size = 5;
    q->A = new int[q->size];
    q->front = q->rear = 0;

}

void enqueue(struct queue *q, int x){
    if((q->rear+1)%q->size==q->front){
        printf("Queue is full");
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->A[q->rear] = x;
    }
}

void display(struct queue q){
    int i = q.front+1;
    do{
        printf("%d ",q.A[i]);
        i = (i+1)%q.size;

    }while(i!=(q.rear+1)%q.size);
}

int dequeue(struct queue *q){
    int x = -1;
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
    struct queue st;
    create(&st);
    enqueue(&st, 10);
    enqueue(&st, 20);
    enqueue(&st, 30);
    enqueue(&st, 40);
    dequeue(&st);
    // dequeue(&st);
    enqueue(&st, 50);
    display(st);
    return 0;
}