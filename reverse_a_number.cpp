#include<bits/stdc++.h>
using namespace std;

int rev(int num){
    int n=num;
    int res=0;
    while(n){
        int rem=n%10;
        res=res*10+rem;
        n=n/10;

    }
    return res;
}

int main(){
    int num=123;

    int res=rev(num);
    string s=to_string(num);
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[s.length()-1-i]);
    }
    int x=stoi(s);
    cout<<res;




}