#include<bits/stdc++.h>
using namespace std;

bool fun(int n,unordered_map<int,int>&mp ){
    int res=0;
    while(n){
        int rem=n%10;
        res=res+pow(rem,2);
        n=n/10;
    }
   
    if (mp.find(res) != mp.end()){
        return false;
    }
    else{
        mp[res]=1;
    }
    if(res==1)return true;
    
    return fun(res,mp);
}

int main(){
    int n=19;
    unordered_map<int,int>mp;
    cout<< fun(n,mp);
}