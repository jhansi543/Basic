#include<bits/stdc++.h>
using namespace std;

void find_even(vector<int>nums){
 
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            nums[i]=-1;
        }
    }
   
}

int main(){
 
    vector<int>vec={6,6,432,67,67,2,67,1000};
    find_even(vec);
   for(int i: vec){
    cout<<i<< " ";
   }
   
   return 0;

}




