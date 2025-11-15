#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int n=23;
    bool flag=true;
    int t=n;
    while(flag){
        t=t+1;
        if(check(t)){
            cout<<t;
            break;
        }
    }
}