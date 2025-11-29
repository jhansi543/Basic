#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int v){
        data=v;
        next=nullptr;
    }

};
void add_front(node*&head, int val){
    node*newnode=new node(val);
    if(head==nullptr){
        head=newnode;
        return;
        
    }
    newnode->next=head;
    head=newnode;
}
void display(node*head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout<<temp->data;
        temp=temp->next;

    }
    cout<<temp->data;
}
void add_back(node*&head,int val){
node*newnode=new node(val);
if(head==nullptr){
    head=newnode;
    return;
}
 node* temp=head;
 while(temp->next!=nullptr){
    temp=temp->next;
 }
 temp->next=newnode;
}
void add_kthposition(node*&head,int p,int val){
    node*newnode=new node(val);
    node* temp=head;
    for(int i=0;i<p-1;i++){
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=newnode;
    newnode->next=temp2;
    

}


int main(){
    node*head=nullptr;
    node*head1=nullptr;
    vector<int>nums={4,6,7,8,9,3};
    for(int i=0;i<nums.size();i++){
        add_front(head,nums[i]);
    }
    
    for(int i=0;i<nums.size();i++){
        add_back(head1,nums[i]);
    }

    
    display(head);
    cout<<endl;
    display(head1);
    cout<<endl;
    add_kthposition(head1,2,33);
      
    display(head1);
}