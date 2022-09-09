#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
// Inside stack
// int A[3][4] = {{1,2,3,4},{1,2,4,5},{5,6,7,8}};

//2nd method   
    // int *A[3];
    // A[0]=  new int [4];
    // A[1] = new int [4];
    // A[2] = new int [4];
    // A[1][0]=20;
    // A[1][1]=10;
    // A[1][2]=12;
    // A[1][3]=15;
    // A[2][0]=25;
    // A[2][1]=30;
    // A[2][2]=30;
    // A[2][3]=30;

//3rd method
int** A; 
A = new int *[3];
A[0]=new int [4];
A[1]=new int [4];
A[2]=new int [4];
    A[0][1]=11;
    A[1][0]=20;
    A[1][1]=10;
    A[1][2]=12;
    A[1][3]=15;
    A[2][0]=25;
    A[2][1]=30;
    A[2][2]=30;
    A[2][3]=30;


    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\n",A[i][j]);
        }
    }

 
 


    return 0;
}