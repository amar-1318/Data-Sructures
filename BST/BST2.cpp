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

int height(node *p){
    int x,y;
    if(p==NULL) return 0;
    x = height(p->lchild);
    y = height(p->rchild);
    return x>y?x+1:y+1;
}
node* inpre(node* p){
    while(p&&p->rchild!=NULL){
        p = p->rchild;
    }
    return p;
}
node* insucc(node* p){
    while(p&&p->lchild!=NULL){
        p = p->lchild;
    }
    return p;
}

node* deletee(node* p, int key){
    node * q;
    if(p==NULL)return NULL;
    if(p->lchild==NULL &&p->rchild==NULL){

        if(p==root){
            root = NULL;
        }
        free(p);
        return NULL;
    }

    if(key<p->data){
        p->lchild = deletee(p->lchild, key);
    }
    else if(key>p->data){
        p->rchild = deletee(p->rchild, key);
    }
    else{
        if(height(p->lchild)>height(p->rchild)){
            q = inpre(p->lchild);
            p->data = q->data;
            p->lchild= deletee(p->lchild,q->data); 
        }
        else{
            q = insucc(p->rchild);
            p->data = q->data;
            p->rchild = deletee(p->rchild,q->data);
        }


    }
    return p;
}
int main(){
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);
    insert(35);
    insert(28);
    deletee(root, 20);
    inorder(root);
    printf("\n");

   return 0;
}