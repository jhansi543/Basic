#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>mp;
    int n=67867;

    while (n)
    {
        int rem=n%10;
        mp[rem]++;
        n=n/10;
    }
    
    for(auto i:mp){
        cout<<i.first<<"->"<<i.second<<"\n";
    }


}