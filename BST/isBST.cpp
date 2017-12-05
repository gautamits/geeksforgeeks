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
bool isBST(node* root,node* l=NULL,node* r=NULL){
    if(root==NULL){
        return 1;
        //empty tree is BST
    }
    if(l!=NULL and root->data < l->data){
        //violation
        return false;
    }
    if(r!=NULL and root->data > r->data){
        //violation
        return false;
    }
    else return isBST(root->left,l,root) and
    isBST(root->right,root,r);
}

int main(int argc,char** argv){
      node *root = newNode(4);
      root->left        = newNode(2);
      root->right       = newNode(5);
      root->left->left  = newNode(1);
      root->left->right = newNode(3); 
     
      if(isBST(root))
        printf("Is BST\n");
      else
        printf("Not a BST\n");


    node *root2 = newNode(3);
    root2->left        = newNode(2);
    root2->right       = newNode(5);
    root2->left->left  = newNode(1);
    root2->left->right = newNode(4);
    
    if (isBST(root2))
        cout << "Is BST\n";
    else
        cout << "Not a BST\n";
      return 0; 
}