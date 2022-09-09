#include<stdio.h>
#include<iostream>
using namespace std;
//Counting words in strings

int main(){
    int word=1;
    char A[]="How are you";
    for(int i=0;A[i]!='\0';i++){
        if(A[i]==' '){
            word++;
        }
    }
    printf("%d",word);

    return 0;
}