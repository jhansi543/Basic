#include<bits/stdc++.h>
using namespace std;
struct tree{
    int data;
    tree*left;
    tree*right;
    tree(int val){
        data =val;
        left=nullptr;
        right=nullptr;
    }
};
void inorder(tree*root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
void  levelorder(tree*root){
    queue<tree*>q;
    if(root==nullptr){
        return;
    }
    q.push(root);
    while(!q.empty()){
        tree*node=q.front();
        q.pop();
        cout<<node->data;
        if(node->left!=nullptr){
            q.push(node->left);
        }
        if(node->right!=nullptr){
            q.push(node->right);
        }
    }
}
int main(){
    tree*root=new tree(1);
    root->left=new tree(2);
    root->right=new tree(3);
    root->left->left=new tree(4);
    root->left->right=new tree(5);
    root->right->left=new tree(6);
    root->right->right=new tree(7);
    inorder(root);
    cout<<endl;
    levelorder(root);
}
