#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;
//created by amit kumar gautam
//05/12/2017
//create BST from given inorder traversal
//maintain min and max for each node, nodes 
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node *newNode(int n){
    struct node* temp = new node;
    temp->left=NULL;
    temp->right=NULL;
    temp->data=n;
    return temp;
}
void inOrder(node *root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
struct node* constructTreeUtil(int pre[],int* index,int key,int min,int max,int n){
    if(*index >= n){
        return NULL;
    }
    node* root=NULL;
    if(key > min && key < max){
        root=newNode(key);
        *index=*index+1;
        if(*index < n){
            root->left=constructTreeUtil(pre,index,pre[*index],min,root->data,n);
            root->right=constructTreeUtil(pre,index,pre[*index],root->data,max,n);
        }
    }
    return root;
}
struct node* constructTree(int pre[],int n){
    int index=0;
    return constructTreeUtil(pre,&index,pre[index],INT_MIN,INT_MAX,n);
}
int main(int argc,char** argv){
    int pre[]={10,5,1,7,40,50};
    node *root = constructTree(pre,6);
    inOrder(root);
    return 0;
}
