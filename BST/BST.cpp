#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
    struct node *lchild;
    struct node *rchild;
    int data;

}*root=NULL;
void insert(int key){
    struct node *t = root;
    struct node *r, *p;
    if(root==NULL){
        p = (struct node*)malloc(sizeof(struct node));
        p->data = key;
        p->lchild=  p->rchild = NULL;
        root = p;
        return ;
    }
    while(t!=NULL){
        r = t;
        if(key<t->data){
            t= t->lchild;
        }
        else if(key>t->data){
            t = t->rchild;
        }
        else{
            return ;
        }
    }
    p = (struct node*)malloc(sizeof(struct node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(key<r->data) r->lchild = p;
    else r->rchild = p;
}

void inorder(struct node *p){
    if(p){
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}
int main(){
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);
    inorder(root);
    printf("\n");

   return 0;
}