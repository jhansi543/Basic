#include<bits/stdc++.h>
using namespace std;

int find_kth_largest(vector<int>&nums,int k){
    sort(nums.begin(),nums.end());
    return nums[nums.size()-k];

}

int main(){
    vector<int>vec={1,2,3,4,4,5,56,77,6};
    int x= find_kth_largest(vec,3);
    cout<<x;
}