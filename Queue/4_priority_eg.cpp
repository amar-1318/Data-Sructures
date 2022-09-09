#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

// Find kth largest element in array using Priority Queue

int main(){
    priority_queue<int> pq;
    int k =2;
    int size = 6;
    int A[] = {20,10,60,30,50,40};
    for(int i=0;i<k;i++){
        pq.push(-A[i]);
    }
    for(int i=k;i<size;i++){
        if(pq.top()>-A[i]){
            pq.pop();
            pq.push(-A[i]);
        }
    }
    cout<<-pq.top();
    return 0;
}



