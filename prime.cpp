#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=23;
    int count=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0)cout<<"prime";
    else cout<<"notprime";
}