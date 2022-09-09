// #include<stdio.h>
// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// struct element{
//     int i;
//     int j;
//     int x;
// };
// struct sparse{
//     int m;
//     int n;
//     int num;
//     struct element *e;
// };
                                                                                    
// void create(struct sparse *s){
//     int i,j;
//     printf("Enter the Dimension\n");
//     scanf("%d %d",&s->m,&s->n);

//     printf("Enter the non-zero elements\n");
//     scanf("%d",&s->num);

//     s->e = (struct element *)malloc(s->num * sizeof(struct element));

//     printf("Enter i, j & x\n");

//     for(i=0;i<s->num;i++){
//         scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
//     }
// }

// void displayy(struct sparse s){
//     int i,j,k=0;
//     for(i=0;i<s.m;i++){
//         for(j=0;j<s.n;j++)
//         {
//             if(i==s.e[k].i && j==s.e[k].j){
//                 printf("%d ",s.e[k++].x);
//             }
//             else{
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }

// int main(){
// struct sparse s;
// create(&s);
// displayy(s);

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct element{
    int i;
    int j;  
    int x;
};
struct matrix{
    int m;
    int n;
    int num;
    struct element *e;

};

void create(struct matrix *s){
    int i,j,x;
    printf("Enter Dimensions\n");
    scanf("%d %d",&s->m,&s->n);
    printf("Enter non-zero numbers\n");
    scanf("%d",&s->num);

    s->e=(struct element *)malloc(s->num * sizeof(struct element));
    printf("Enter i , j & x");
    for(i=0;i<s->num;i++){
    scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}
void display(struct matrix s){
    int i,j,x,k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(i==s.e[k].i && j == s.e[k].j){
                printf("%d ",s.e[k++].x);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    struct matrix s;
    create(&s);
    display(s);


    return 0;
}
