#include<stdio.h>
#include<iostream>
using namespace std;
// Insert Using Recursion

struct node{
    int data;
    node* lchild;
    node* rchild;

}*root=NULL;

node *insert(node* p, int key){
    // node *p  =root;
    node *t;
    if(p==NULL){
        t = new node;
        t->data = key;
        t->lchild = t->rchild =NULL;
        return t;
    }
    // else{
        if(key<p->data){
            p->lchild = insert(p->lchild, key);
        }
        else{
            p->rchild = insert(p->rchild, key);
        }
    // }

    return p;


}

void inorder(node*p){
    if(p){
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}

int main(){
    node *root = NULL;
    root = insert(root, 30);
    insert(root, 20);
    insert(root, 50);
    insert(root, 18);
    insert(root, 28);
    inorder(root);
    
    return 0;
}
