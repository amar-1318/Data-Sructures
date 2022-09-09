#include <stdio.h>
#include <iostream>
using namespace std;
// Finding length of string

int length(char A[])
{
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    printf("%d", i);
    return 0;
}

//Changing Case to upper

int casee(char A[]){
    int i;
    for(i =0;A[i]!='\0';i++){
        if(A[i]>='a'&&A[i]<='z'){
            A[i]=A[i]-32;
        }

    }
    printf("%s\n",A);
    return 0;
}

//Changing case to lower
int casee1(char A[]){
    int i;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]>='A'&&A[i]<='Z'){
            A[i]=A[i]+32;
        }
    }    
    printf("%s",A);
    return 0;
}

//Changing cases vice versa

int casee2(char A[]){
    for(int i=0;A[i]!='\0';i++){
        if(A[i]>='A'&&A[i]<='Z'){
            A[i]=A[i]+32;
        }
        else{
            if(A[i]>='a'&&A[i]<='z'){
                A[i]=A[i]-32;
            }
        }
    }
    printf("%s",A);
    return 0;
}


int main()
{
    // char A[] = "pthon";
    // char A[] = "PYTHON";
    char A[]="PythOn";
    // printf("Length of string is:\n");
    // length(A);
    // printf("\nElements in upper case:\n");
    // casee(A);
    // printf("\nElements in lower case are as follows :\n");
    // casee1(A);
    casee2(A);

    return 0;
}