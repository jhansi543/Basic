#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    int t=8;
    int l=0;
    int r=nums.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==t){
            cout<<"found";
            return 0;
        }
        if(nums[mid]>t){
            r=mid-1;
        }
        else{
            l=mid+1;
        }

    }

    
    

}
