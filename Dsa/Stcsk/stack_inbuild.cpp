#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(7);
    st.push(18);
    st.push(5);
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}
