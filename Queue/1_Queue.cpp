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
    printf("Enter size ");
    scanf("%d",&q->size);
    q->A = new int[q->size];
    q->rear = q->front = -1;
}

void enqueue(struct queue *q , int x){
    if(q->rear == q->size -1){
        printf("Queue is full");
    }
    else{
        q->rear++;
        q->A[q->rear] = x;
    }
}
int dequeue(struct queue *q){
    int x = -1;
    if(q->front==q->rear){
        printf("Queue is empty");
    }
    else{
        q->front++;
        x = q->A[q->front];
    }
    return x;
}

void display(struct queue st){
    printf("Queue : \n");
    for(int i=st.front+1 ;i<=st.rear;i++){
        printf("%d ",st.A[i]);
    }
}
int main(){
    struct queue qt;
    create(&qt);
    enqueue(&qt,10);
    enqueue(&qt,20);
    enqueue(&qt,30);
    enqueue(&qt,40);
    display(qt);
    return 0;
}