#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;
//created by amit kumar gautam
//05/12/2017
//check if binary tree is BST or not
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
int isBST(node* root,node* min,node* max){
    if(root==NULL){
        return 1;
        //empty tree is BST
    }
    if(root->data < min || root-> data > max){
        //violation
        return 0;
    }
    else return isBSTUtil(root->left,min,root->data-1) &&
    isBSTUtil(root->right,root->data+1,max);
}

int main(int argc,char** argv){
    {
      struct node *root = newNode(4);
      root->left        = newNode(2);
      root->right       = newNode(5);
      root->left->left  = newNode(1);
      root->left->right = newNode(3); 
     
      if(isBST(root))
        printf("Is BST\n");
      else
        printf("Not a BST\n");
      return 0;
    }  
}