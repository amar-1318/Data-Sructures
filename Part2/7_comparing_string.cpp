#include<stdio.h>
#include<iostream>
using namespace std;
//Comparing strings if they are same or not and printing which string is greater or smaller
// int main(){
//     char A[]="cleaner";
//     char B[]="cleaning";
//     int i,j;
//     for(i=0,j=0;A[i]!='\0',B[j]!='\0';i++,j++){
//         if(A[i]!=B[j]){
//             break;
//         }
//     }
//     if(A[i]==B[j])printf("Equal");
//     else if(A[i]<B[j])printf("%s is Smaller than %s ",A,B);
//          else{
//              printf("Element in A is greater than B");
//          }


//     return 0;
// }
//If characters are in upper case or lower in string then we can convert it all into upper or lower then check if they are same or not and which one is greater or smaller by alphabets order.
int main(){
    char A[]="Cleaning";
    char B[]="cleaner";
    int i,j;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>='A'&&A[i]<='Z'){
            A[i]=A[i]+32;
        }

    }
    for(i=0,j=0;A[i]!='\0',B[j]!='\0';i++,j++){
        if(A[i]!=B[j])break;
    }
    if(A[i]==B[j])printf("Equal");
    else if(A[i]<B[j])printf("Element in A is smaller than element in B");
        else printf("Element in A is greater than element in B");


    return 0;
}

