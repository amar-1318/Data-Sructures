#include<iostream>
#include<stdio.h>
using namespace std;
int hashing(char A[]){
    int i,j;
    int H[26]={0};
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(i=0;i<26;i++){
        if(H[i]>1){
            printf("%c is repeating %d times \n",i+97,H[i]);
        }
    }
    return 0;
}
// Using bitwise 

int bitwise(char A[]){
    int x=0,H=0;
    int i;
    for(i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0){
            printf("%c is repeating\n",A[i]);
        }
        else{
            H = x|H;
        }
    }
    return 0;
}

int main(){
    char A[]="finding";
    bitwise(A);


    return 0;
}