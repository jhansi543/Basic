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
void push(node*&front,node*&back,int v){
    node*newnode=new node(v);
    if(front==nullptr){
        front=newnode;
        back=newnode;
        return ;
    }
    back->next=newnode;
    back=newnode;
}

void pop(node*&f,node*&b){
    if(f==nullptr){
        cout<<"not posssible";
        return ;
    }
    if(f->next==nullptr){
    f=nullptr;
    b=nullptr;
    }
    f=f->next;
}
void front(node*f){
    if(f==nullptr){
        cout<<"q is empty";
        return;
    }
    cout<<f->data;
}
bool empty(node*f){
    if(f==nullptr)return true;
    return false;
}

int main(){
    node*f=nullptr;
    node*b=nullptr;
    push(f,b,12);
    push(f,b,13);
    push(f,b,14);
    push(f,b,15);
    pop(f,b);
    front(f);
    cout<<"\n";
    cout<<empty(f);
}