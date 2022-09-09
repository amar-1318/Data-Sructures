#include<stdio.h>
#include<iostream>
using namespace std;
//Counting vowels and conconents 

int vowels(char A[]){
    int i;
    int vcount=0;
    int ccount=0;
    for(i=0;A[i]!='\0';i++){
        if(A[i]=='a'|| A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){
            vcount++;
        }
        else{
            ccount++;
        }
    }
    printf("Vowels in word are : %d \n",vcount);
    printf("Conconents in words are : %d \n",ccount);
    return 0;
}
int main(){
    char A[]="Elephant";
    vowels(A);



    return 0;
}