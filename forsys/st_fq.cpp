#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hjlnir";
    vector<int>vec(25,0);
    for(int i=0;i<s.length();i++){
        vec[s[i]-'a']++;
    }
   

    for(int i=0;i<26;i++){
        cout<<vec[i]<<" ";
    }

        
   
}