#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct element{
    int i;
    int j;
    int x;
};
struct sparse{
    int m;
    int n;
    int num;
    struct element *e;
};
void create(struct sparse *s, struct sparse *s1){
    int i,j,x,k;
    int num;
    printf("Enter Dimension of S");
    scanf("%d %d",&s->m,&s->n);
    printf("Enter Non-Zero Elements of S");
    scanf("%d",&s->num);
    s->e= (struct element *)malloc(s->num *sizeof(struct element));
    printf("Enter elements\n");
    for(i=0;i<s->num;i++){
        scanf("%d%d%d",&s->e[i].i , &s->e[i].j, &s->e[i].x);
    }
    
    printf("Enter Dimension of S1");
    scanf("%d %d",&s1->m,&s1->n);
    printf("Enter Non-Zero Elements S1");
    scanf("%d",&s1->num);
    s1->e = (struct element *)malloc(s1->num * sizeof(struct element));
    printf("Enter Elements\n");
    for(j=0;j<s1->num;j++){
        scanf("%d %d %d",&s1->e[j].i,&s1->e[j].j,&s1->e[j].x);
    }

    // Sum
}
void display(struct sparse s){
    int i,j,x,k=0;
    printf("For Matrix S\n");
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(i==s.e[k].i&&j==s.e[k].j){
            printf("%d ",s.e[k++].x);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void display1(struct sparse s1){
    int i,j,x,k=0;
    printf("For Matrix S1\n");
    for(i=0;i<s1.m;i++){
        for(j=0;j<s1.n;j++){
            if(i==s1.e[k].i&&j==s1.e[k].j){
            printf("%d ",s1.e[k++].x);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
struct sparse * adding(struct sparse *s, struct sparse *s1){
    int i=0,j=0,k=0;
    struct sparse *sum;
    sum = (struct sparse *)malloc(sizeof(struct sparse));
    sum->e = (struct element *)malloc((s->num+s1->num)*sizeof(struct element));
    while(i<s->num && j<s1->num){
        if(s->e[i].i<s1->e[j].i){
            sum->e[k++]=s->e[i++];
        }
        else{
            if(s->e[i].i>s1->e[j].i){
                sum->e[k++]=s1->e[j++];
            }
            else{
                // If rows same then check for columns
                if(s->e[i].j<s1->e[j].j){
                    sum->e[k++]=s->e[i++];
                }
                else{
                    if(s1->e[j].j<s->e[i].j){
                        sum->e[k++]=s1->e[j++];
                    }
                    else{
                        sum->e[k]=s->e[i];
                        sum->e[k++].x = s->e[i++].x + s1->e[j++].x;    
                    }
                }
            }
        }
    
    }
    for(;i<s->num;i++)sum->e[k++]=s->e[i];   
    for(;j<s1->num;j++)sum->e[k++]=s1->e[j];
    // sum->m=s->m;
    // sum->n=s->n;
    // sum->num=k;
    return sum;
}
void display2(struct sparse s2){
    int i,j,x,k=0;
    printf("For Matrix S2\n");
    for(i=0;i<s2.m;i++){
        for(j=0;j<s2.n;j++){
            if(i==s2.e[k].i&&j==s2.e[k].j){
            printf("%d ",s2.e[k++].x);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    struct sparse s;
    struct sparse s1;
    struct sparse *s2;
    create(&s, &s1);
    display(s);
    display1(s1);
    s2 = adding(&s,&s1);
    display2(*s2);
    return 0;
}