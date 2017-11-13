#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *left,*right;
    int key;
};
struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct node *insert(struct node *root, int data){
    if(root==NULL) return newNode(data);
    if(root->key < data)
        root->right=insert(root->right,data);
    else
        root->left=insert(root->left,data);
    return root;
}
void inOrder(struct node *root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->key<<" ";
    inOrder(root->right);
}
struct node* minValueNode(struct node *root){
    struct node *current=root;
    while(current->left!=NULL)
        current=current->left;
    return current;
}
struct node *deleteNode(struct node *root,int data)
{
    if(root==NULL) return root;
    if(data < root->key) 
        root->left=deleteNode(root->left,data);
    else if(data > root->key)
        root->right = deleteNode(root->right,data);
    else{
        if(root->left==NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->key=temp->key;
        root->right=deleteNode(root->right,temp->key);
    }
    return root;

}

int main(){
    struct node *root=NULL;
    root=insert(root,50);
    root=insert(root,30);
    root=insert(root,20);
    root=insert(root,40);
    root=insert(root,70);
    root=insert(root,60);
    root=insert(root,80);
    cout<<"inorder "<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"delete 20\n";
    root=deleteNode(root,20);
    inOrder(root);
    cout<<endl;

    cout<<"delete 30\n";
    root=deleteNode(root,30);
    inOrder(root);
    cout<<endl;

    cout<<"delete 50\n";
    root=deleteNode(root,50);
    inOrder(root);
    cout<<endl;

    return 0;

}