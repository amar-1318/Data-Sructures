#include<stdio.h>
#include<iostream>
using namespace std;

//-------------------------For 1st N natural number--------------------------

// int missing(int A[], int n)
// {
//     int  sum =0;
//     for(int i=0;i<11;i++){
//         sum = sum +A[i];
//     }
//     int s;
//     s = n*(n+1)/2;
//     int result = s-sum;
//     return result;
// }

// int main(){
//     int A[]={1,2,3,4,5,6,8,9,10,11,12};
//     int n = 12;
//     printf("%d",missing(A, n));
//     return 0;
// }

//---------------------For non 1st N natural number---------------------

// int missing(int A[], int n){
//     int l = 6;
//     int diff = 6-0;
//     for(int i=0;i<n;i++){
//         if(A[i]-i!=diff){
//             printf("Missing element is %d ",i+diff);
//         }
//     }
// return 0;
// }
// int main()
// {
//     int A[]={6,7,8,9,10,11,13,14,15,16,17};
//     int n = 11;
//     missing(A, n);

//     return 0;
// }

//---------------------For missing multiple elements--------------------

int miss(int A[], int n){
    int diff = 6-0;
    for(int i=0;i<n;i++){
        if(A[i]-i != diff ){
            while(diff<A[i]-i){
                printf("Missing Elements are %d \n",i+diff);
                diff++;
            }
        }
    }
    return 0;
}
int main(){
    int A[]={6,7,8,9,11,12,15,16,17,18,19};
    int n = 11;
    miss(A, n);
}
