#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    node *A[4];
    int data;
    int col;
    struct node *next;
}*head=NULL;

void create(int data, int colid, int rowid, int m, int n ){
    node *A[m];
    for(int i=0;i<m;i++){
     A[i]=new node;
    }
    // A[1]=new node;
    // A[2]= new node;
    // A[3] = new node;

    for(int i=0;i<4;i++){
    A[rowid]->data = data;
    A[rowid]->col = colid;
    A[rowid]->next = NULL;

    }
    
    
    

}
void display(int m, int n){
    struct node *p;
    for(int i=0;i<m;i++){
        p =head->A[i];
        for(int j=0;j<n;j++){
            if(j==p->col){
                printf("%d ",p->data);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    create(10,1,1,4,5);
    create(20,2,3,4,5);
    create(30,3,4,4,5);
    create(40,4,5,4,5);
    // create(10,1,1,4,5);
    display(4,5);
    return 0;
}
