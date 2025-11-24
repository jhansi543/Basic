#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;           
    node(int val){        
        data=val;
        next=nullptr;
    }
};

int main(){
    node*head=new node(5);
    head->next=new node(6);   
    head->next->next=new node(7);
    head->next->next->next=new node(8);

    node* temp=head;
    while(temp->next!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}