#include<stdio.h>
#include<iostream>
using namespace std;
int validatee(char A[]){
    for(int i=0;A[i]!='\0';i++){
        if(!(A[i]>='A'&&A[i]<='Z')&&!(A[i]>='a'&&A[i]<='z')&& !(A[i]>=48 && A[i]<=97)){
            return 0;
        }


    }
    return 1;


    return 0;
}

int main(){
char A[]="Python123";
if(validatee(A)){
    printf("String is valid");
}
else{
    printf("String is not valid");
}


    return 0;
}