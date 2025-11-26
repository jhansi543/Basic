#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int v){
        data=v;
        next=nullptr;
    }
};

void add_front(node*&head,int v){
    node*newnode=new node(v);
    if(!head){
        head=newnode;
        return ;
    }
    node*t=head;
    head=newnode;
    head->next=t;
}

void desplay(node*head){
    node*t=head;
    while(t->next){
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<t->data<<"\n";
}

void add_back(node*&head,int v){
    node*newnode=new node(v);
    if(!head){
        head=newnode;
        return ;
    }
    node*t=head;
    while(t->next){
        t=t->next;
    }
    t->next=newnode;

}

// to find the given data is present in the linked list
node* find_ele(node*&head,int target){
    node*t=head;
    while(t->next){
        if(t->data==target){
            return t;
        }
        t=t->next;
    }
    if(t->data==target)return t;
    return nullptr;
}
// to find the given node is present in linked list
int find_data(node*&head,node*target){
    node*t=head;
    while(t->next){
        if(t==target){
            return t->data;
        }
        t=t->next;
    }
    if(t==target)return t->data;
    return -1;
}

int main(){
    node*head1=nullptr;
    node*head2=nullptr;
    vector<int>arr={5,6,7,8,9};
    for(int i=0;i<arr.size();i++){
        int val=arr[i];
        add_front(head1,val);
    }
    for(int i=0;i<arr.size();i++){
        int val=arr[i];
        add_back(head2,val);
    }


    desplay(head1);
    desplay(head2);

    node*x=find_ele(head1,7);
    if(x==nullptr){
        cout<<"ele not found";
    }
    else{
        cout<<x<<" data:"<<x->data;
    }
    cout<<"\n";
    node* target=head1->next->next->next;
    int y=find_data(head1,target);
    if(y==-1){
        cout<<"not found";
    }
    else{
        cout<<y;
    }
}