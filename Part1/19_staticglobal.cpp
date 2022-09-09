#include<stdio.h>
#include<iostream>
using namespace std;
int x;
int fun(int n){
    // static int x = 0;
    //If we make it global it will similarly act as static cause noth belong to same in code section 
  if (n>0){
      x++;
    
   printf("%d\n",n);
   return fun(n-1)+x;
  }
  return 0;
  


}
int main(){
    int a=5;
    printf("%d\n",fun(a));
    printf("%d\n",fun(a));// The value of x will be 10 in this func cause x will start from 5 for this func
    



    return 0;
}