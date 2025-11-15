#include<bits/stdc++.h>
using namespace std;
bool palin(string s){
    int p1=0;
    int p2=s.length()-1;
    while(p1<p2){
        if(s[p1]!=s[p2])return false;
        p1++;
        p2--;
    }
    return true;
}

int main(){
    string s="tsdfhsa";
    cout<<palin(s);
}