#include<bits/stdc++.h>
using namespace std;
int main(){
   
    vector<int>qq={1,2,3,4,5};
    int n=qq.size();
    for(int i=0;i<n;i++){
        if(qq[i]==44){
            cout<<"ele found";
            break;
        }
    }
    cout<<"ele not foun\n";
    cout<<qq[n/2];
   
}