#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int anag(char A[],char B[]){
    int H[26]={0};
    int i,j;
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(j=0;B[j]!='\0';j++){
        H[B[j]-97]--;
    if(H[B[j]-97]<0){
        printf("Not anagram");
        break;
    }
    }
    if(B[j]=='\0'){
        printf("Anagram");
    }
return 0;
}



int anagram(char A[],char B[]){
    int i,j;
    int H[26]={0};
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(j=0;B[j]!='\0';j++){
        H[B[j]-97]--;
        if(H[B[j]-97]<0){
            printf("Not Anagram");
            break;
        }

    }
    if(B[j]=='\0'){
        printf("Anagram");
    }

}
int main(){
    char A[]="decimal";
    char B[]="meoical";
    anagram(A,B);
}