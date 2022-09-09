#include<stdio.h>
#include<iostream>
using namespace std;
struct array{
int A[10];
int size;
int length;
};

int check(struct array arr)
{
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return -1;
        }
    }
        return 1;

return 0;
}
void display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}



int main(){
  struct array arr{{1,20,4,6,7,10,15},{10},{7}};
  printf("%d",check(arr));

    return 0;
}