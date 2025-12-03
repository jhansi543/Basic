#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    cout<<q.front();
    cout<<endl;
    q.pop();
    cout<<endl;
    cout<<q.front();
    cout<<endl;
   cout<<q.empty();
   cout<<endl;
   cout<<q.size();
    


}