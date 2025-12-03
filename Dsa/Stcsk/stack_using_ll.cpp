#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int value){
        data=value;
        next=nullptr;
    }
};
void push_value(node*&top,int val){
     node*newnode=new node(val);
    if(top==nullptr){
        top=newnode;
        return;
    }
   
    newnode->next=top;
    top=newnode;
};
void display_top(node*&top){
   if(top==nullptr){
    cout<<"Stack is empty";
   }
   cout<<top->data<<endl;
}
void pop(node*&top){
    if(top==nullptr){
        cout<<"empty";
        return;
    }
    top=top->next;

}
bool empty(node*top){
    if(!top) return true;
    return false;

}
void  display_size(node*&top){
    int c=0;
   
    if(top==nullptr){
        cout<<"Empty stack"<<endl;
        return;
    }
     node*temp=top;
    while(temp->next!=nullptr){
        c=c+1;
        temp=temp->next;
    }
    cout<<c+1<<endl;
}

int main(){
    node*t=nullptr;
    push_value(t,7);
    push_value(t,17); 
    push_value(t,27); 
    push_value(t,37);
    pop(t);   
   cout<<empty(t)<<endl;
   display_top(t);
   display_size(t);

}