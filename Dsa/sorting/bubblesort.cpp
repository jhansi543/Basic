#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={4,2,1,5,3};
    for(int i=1;i<5;i++){
        for(int j=0;j<5-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }
}

