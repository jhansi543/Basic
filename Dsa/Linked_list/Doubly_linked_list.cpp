#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
    node*next;
    node*pre;
    node(char v){
        data=v;
        next=nullptr;
        pre=nullptr;
    }
};

// 2 1 6 4    c=10+11+13
// 2 1 10 
// 2 11
// 13

//3 6 4
//9 4      c3+9+13
//13
// 3 6 4
// 7 6   c 3+7+13
// 13
void add_fro(node*&head,node*&tail,char v){
    node*newnode=new node(v);
    if(head==nullptr &&tail==nullptr){
        head=newnode;
        tail=newnode;
        return ;
    }
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
}

void desplay(node*tail){
    node*temp=tail;
    while(temp->pre){
        cout<<temp->data<<"->";
        temp=temp->pre;
    }
    cout<<temp->data;
    cout<<endl;

}
void add_back(node*&head,node*&tail,char a){
    node*newnode=new node(a);
    if(head==nullptr && tail==nullptr){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
  
    
}

void desplay_f_b(node*tail){
    node*temp=tail;
    while(temp->next){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;

}
void  insert_at_kthposition(node*&head,int kth_pos,char val){
    node*newnode=new node(val);
    node*temp=head;
    for(int i=0;i<kth_pos-1;i++){
        temp=temp->next;
    }
    node*t2=temp->next;
    temp->next=newnode;
    newnode->pre=temp;
    newnode->next=t2;
    t2->pre=newnode;


}

void del_f(node*&head,node*&tail){
    if(head==nullptr){
        cout<<"not posiible to del";
        return;
    }
    if(head->next==nullptr){
        head=nullptr;
        tail=nullptr;
    }
        head=head->next;
        head->pre=nullptr;

}
void del_b(node*&head,node*&tail){
    if(head==nullptr){
        cout<<"not posiible to del";
        return;
    }
    if(head->next==nullptr){
        head=nullptr;
        tail=nullptr;
    }
    tail=tail->pre;
    tail->next=nullptr;
}

void del_k_pos(node*&head,node*&tail,int k){
    node*t=head;
    for(int i=1;i<k;i++){
        t=t->next;
    }
    t->next=t->next->next;
    t->next->pre=t;
}
int main(){
    node*head=nullptr;
    node*tail=nullptr;
    vector<char>nums={'1','2','r','a','m','u'};
    for(int i=0;i<6;i++){
        add_fro(head,tail,nums[i]);
    }
    desplay(tail);
    desplay_f_b(head);
    for(int i=0;i<nums.size();i++){
        add_back(head,tail,nums[i]);
    }
    desplay(tail);
    desplay_f_b(head);
    int kth_position=2;
    char vt='j';
   insert_at_kthposition(head,kth_position,vt);
    desplay_f_b(head);

    del_f(head,tail);
    desplay_f_b(head);
    del_b(head,tail);
    desplay_f_b(head);
    del_k_pos(head,tail,2);
    desplay_f_b(head);

}