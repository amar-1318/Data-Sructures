#include<stdio.h>
#include<iostream>
using namespace std;
//Using extra array

// int main(){
//     char A[]="python";
//     int i;
//     int j;
//     char B[7];
//     for(i=0;A[i]!='\0';i++){

//     }
//     i = i-1;
//     for( j=0;i>=0;i--,j++){
//         B[j]=A[i];
//     }
//     B[j]='\0';
//     printf("%s",B);

//     return 0;
// }

//Using swaping
int main(){
    char A[]="python";
    int i,j;
    for(j=0;A[j]!='\0';j++){

    }
    j = j-1;
    for(i=0;i<j;i++,j--){
        int temp;
        temp = A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    printf("%s",A);
    return 0;
}
