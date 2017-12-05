#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;
//created by amit kumar gautam
//05/12/2017
//create BST from given inorder traversal
//convert binary tree to binary search tree
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
int countNodes(node *root){
    if(root==NULL) return 0;
    else return countNodes(root->left)+countNodes(root->right)+1;
}
void populateArray(node* root,int arr[],int* index){
    if(root==NULL) return;
    populateArray(root->left,arr,index);
    arr[*index]=root->data;
    *index=*index+1;
    populateArray(root->right,arr,index);
}
void populateTree(node* root,int arr[],int* index){
    if(root==NULL) return;
    populateTree(root->left,arr,index);
    root->data=arr[*index];
    *index=*index+1;
    populateTree(root->right,arr,index);
}
void binaryTreeToBST(node* root){
    int nodes = countNodes(root);
    int arr[nodes];
    int index=0;
    populateArray(root,arr,&index);
    sort(arr,arr+nodes);
    //for(int i=0;i<nodes;i++ ) cout<<arr[i]<<" ";
    index=0;
    populateTree(root,arr,&index);

}

int main()
{
    struct node *root = NULL;
 
    /* Constructing tree given in the above figure
          10
         /  \
        30   15
       /      \
      20       5   */
    root = newNode(10);
    root->left = newNode(30);
    root->right = newNode(15);
    root->left->left = newNode(20);
    root->right->right = newNode(5);
 
    // convert Binary Tree to BST
    binaryTreeToBST (root);
 
    printf("Following is Inorder Traversal of the converted BST: \n");
    inOrder (root);
 
    return 0;
}