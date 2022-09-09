#include <bits/stdc++.h>
#include<iostream>
// Map :
// 1. Orderd Map - Store elements in order eg. if 1,8,5 -> 1,5,8 it uses red black tree
// 2. Un orderd Map
using namespace std;
int main(){
    unordered_map<int, string>mp;
    mp[1] = "abc";
    mp[5] = "cdc";
    mp[2] = "acd";
    mp.insert({4,"afg"});

    for(auto val : mp){
        cout<<val.first<<" "<<val.second<<endl;
    }


    
    return 0;
}