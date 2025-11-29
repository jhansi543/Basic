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
void desplay(node*tail){
    node*temp=tail;
    while(temp->pre){
        cout<<temp->data<<"->";
        temp=temp->pre;
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

}