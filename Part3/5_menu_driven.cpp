#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class diagonal{
    private:
        int *A,n;
    public:
        diagonal(int n);
        void create();
        int get(int i,int j);
        void set(int i, int j, int x);
        void display();
        ~diagonal();
};

diagonal ::diagonal(int n){
    this->n = n;
    A = new int[n];
}
diagonal::~diagonal(){
    delete []A;
}
void diagonal::create(){
    int i,j,x;
    printf("Enter the elements\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){

            cin>>x;
            // We r taking all the values of matrices and let the compiler decide wheather to store it in array or not
            if(i==j)A[i-1]=x;
        }
    }
}
int diagonal::get(int i, int j){
        if(i==j){
            return A[i-1];
        }
        else return 0;
}
void diagonal::set(int i,int j,int x){
        if(i==j)A[i-1]=x;
}
void diagonal::display(){
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i==j)printf("%d ",A[i-1]);
                else printf("0 ");
            }
            printf("\n");
        }
}

int main(){
    diagonal d(4);
    int i,j,ch,x;
    do{
        printf("\n----Menu----\n");
        printf("1.Create\n");
        printf("2.Get\n");
        printf("3.Set\n");
        printf("4.Display\n");
        printf("5.Exit\n");

        printf("Enter Choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: d.create();
                    break;
            case 2: printf("Enter values of i & j \n");
                    scanf("%d %d",&i,&j);
                    cout<<d.get(i,j);
                    break;
            case 3: printf("Enter values of i & j & x");
                    scanf("%d %d %d",&i,&j,&x);
                    d.set(i,j,x);
                    break;
            case 4: d.display();
            case 5: printf("\nExit\n");
                    exit(1);
        }

        }
    while(ch<6);
    return 0;
}