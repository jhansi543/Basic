#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>find_multiple(vector<int>&nums){
    int n=nums.size();
    vector<vector<int>>res;
    for(int i=0;i<n;i++){
        vector<int>factors;
        for(int j=i;j<n;j++){
            if(nums[j]%nums[i]==0){
                factors.push_back(nums[j]);
            }
        }
        res.push_back(factors);
    }
    return res;
}

int main(){
    vector<int>vec={2,4,6,8,12};
    vector<vector<int>> x=find_multiple(vec);
    for(auto i:x){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}