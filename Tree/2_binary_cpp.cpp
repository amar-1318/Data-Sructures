#include<stdio.h>
#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main(){
    int arr[] = {10,20,30,40,50};
    for(int val : arr){
        cout<<" "<<val;
    }
    for(auto &val : arr){
        if(val==10){
            val = 100;
        }
        
    }
    for(int val : arr){
        cout<<endl<<val;
    }

    return 0;
}