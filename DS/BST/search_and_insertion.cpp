#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *left,*right;
};

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    temp->key=data;
    return temp;
}

struct node *insert(struct node* root,int data){
    if(root==NULL) return newNode(data);
    if(root->key > data ) 
        root->left=insert(root->left,data);
    else if(root->key < data) 
        root->right=insert(root->right,data);
    return root;
    }
void inorder(struct node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int main(){
    struct node *root=NULL;
    root=insert(root,50);
    inorder(root);
    cout<<endl;
    insert(root,30);
    inorder(root);
    cout<<endl;
    insert(root,20);
    inorder(root);
    cout<<endl;
    insert(root,40);
    inorder(root);
    cout<<endl;
    insert(root,70);
    inorder(root);
    cout<<endl;
    insert(root,60);
    inorder(root);
    cout<<endl;
    insert(root,80);
    inorder(root);
    cout<<endl;
    return 0;
}
    
