#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
#include<math.h>
struct element{
    int coeff;
    int exp;
};
struct poly{
    int n;
    struct element *t;
};
void polynomial(struct poly *p){
    int i,j;
    printf("Enter value of n\n");
    scanf("%d",&p->n);

    p->t= (struct element *)malloc(p->n*sizeof(struct element));

    for(i=0;i<p->n;i++){
        printf("Term number %d",i+1);
        scanf("%d %d",&p->t[i].coeff,&p->t[i].exp);
    }
}


int evaluation(struct poly *p,int x){
    int i,sum=0;
    for(i=0;i<p->n;i++){
        sum = sum + p->t[i].coeff * (pow(x,p->t[i].exp));
    }
    return sum;
}
struct poly *adding(struct poly *p1, struct poly *p2){
    struct poly *p3;
    int i,j,k;
    p3 = (struct poly *)malloc(sizeof(struct poly));
    p3->t = (struct element *)malloc((p1->n + p2->n)*sizeof(struct element));
    i=0;j=0;k=0;
    while(i<p1->n && j<p2->n){
        if(p1->t[i].exp>p2->t[j].exp){
            p3->t[k++]= p1->t[i++];
        }
        else{
            if(p2->t[j].exp>p1->t[i].exp){
                p3->t[k++]=p2->t[j++];
            }
            else{
                p3->t[k].exp=p1->t[i].exp;
                p3->t[k++].coeff =p1->t[i++].coeff + p2->t[j++].coeff; 
            }
        }
    }
    for(;i<p1->n;i++)p3->t[k++]=p1->t[i];
    for(;j<p2->n;j++)p3->t[k++]=p2->t[j];
    
    p3->n = k;
    return p3;
}
void displayy(struct poly p){
    int i;
    for(i=0;i<p.n;i++){
        printf("coeff : %d exp: %d\n",p.t[i].coeff,p.t[i].exp);
    }
}

int main(){
struct poly p1;
struct poly p2;
struct poly *p3;

polynomial(&p1);
polynomial(&p2);

p3 = adding(&p1,&p2);
displayy(p1);
printf("\n");
displayy(*p3);
// cout<<evaluation(&p ,5);


    return 0;
}