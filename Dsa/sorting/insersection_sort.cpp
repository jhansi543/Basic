#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,4,3,2,5};
    for(int i=1;i<5;i++){
        int k=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>k){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
    for(int i:arr){
        cout<<i<<" ";
    }
}