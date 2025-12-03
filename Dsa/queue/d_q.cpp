#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(7);
    dq.push_front(8);
    dq.pop_back();
    dq.pop_front();
    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    
}