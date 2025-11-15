#include<bits/stdc++.h>
using namespace std;

int find_pairs(vector<int>&nums){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            count++;
        }
    }
    return count;
}


int main(){
    vector<int>vec(12);
    vec={2,3,34,55,55,55,7,6,6,8,3,3};
    int pairs=find_pairs(vec);
    cout<<pairs;
}