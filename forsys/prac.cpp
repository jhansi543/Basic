#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<string>res;
    string s="my name is jhansi meri golla";
    string t="";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            res.push_back(t);
            t=" ";
        }
        t=t+s[i];
    }
    res.push_back(t);
    for(auto i:res){
        cout<<i<<endl;
    }

}