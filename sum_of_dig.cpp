#include<bits/stdc++.h>
using namespace std;
int find_len(int n){
    int sum=1;
    while(n)
    {
        sum*=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n=6578;

   cout<<find_len(n);
    
}