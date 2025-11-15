#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    int t=n-2;
    if(n==1){
        cout<<0;
        return 0;
    }
    if(n==2){
        cout<<1;
        return 0;
    }
    int p1=0;
    int p2=1;
    int c=-1;
    for(int i=0;i<=t;i++){
        c=p1+p2;
        p1=p2;
        p2=c;

    }
    cout<<c;

}