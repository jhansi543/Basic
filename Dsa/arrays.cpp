#include<bits/stdc++.h>
using namespace std;
int main(){
   
    vector<int>nums={1,2,3,4};
    int c=0;
    for(int i=0;i<nums.size();i++){
        c+=nums[i];
    }
    cout<<c;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            cout<<nums[i]<<" ";
        }
    }
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==4){
            cout<<"4 found";
            nums[i]=44;
        }
    }
    for(int x:nums){
        cout<<x<<" ";
    }

}