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

void insert_at_kth_pos(node*&head,int k,int v){
    node*newnode=new node(v);
    node*t=head;
    for(int i=0;i<k;i++){
        t=t->next;
    }
    node*t2=t->next;
    t->next=newnode;
    newnode->next=t2;
}

void del_at_fitst(node*&head){
    if(!head){
        cout<<"canot del ";
    }

    if(!head->next){
        head=nullptr;
    }

    head=head->next;
    cout<<"deleted sucessfully start";
}
void del_at_end(node*&head){
    if(!head){
        cout<<"canot del ";
    }
    if(!head->next){
        head=nullptr;
    }
    node*t=head;
    while(t->next->next!=NULL&&t->next!=NULL){
        t=t->next;
    }
    t->next=nullptr;
    cout<<"deleted sucessfully end";
}
void del_at_kth_pos(node*&head ,int k){
    if(!head){
        cout<<"canot del ";
    }
    if(!head->next){
        head=nullptr;
    }
    node*t=head;
    for(int i=0;i<k-1;i++){
        t=t->next;
    }
    t->next=t->next->next;
    cout<<"deleted sucessfully kt pos";
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

    insert_at_kth_pos(head1,3,8);
    desplay(head1);

    del_at_fitst(head1);
    desplay(head1);
    cout<<"\n";
    
    del_at_end(head1);
    cout<<"\n";
    desplay(head1);
    cout<<"\n";
    del_at_kth_pos(head1,2);
    cout<<"\n";
    desplay(head1);


}