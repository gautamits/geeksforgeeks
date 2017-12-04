#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
int height(struct node* root);
void printGivenLevel(struct node* root,int current,int level);
void printLevelOrder(struct node* root);
struct node* newNode(int data);
int max(int,int);
void printGivenLevel(struct node* root,int current,int level){
    if(root==NULL) return;
    if(current==level){
        printf("%d ",root->data);
        return;
    }
    else{
        printGivenLevel(root->left,current+1,level);
        printGivenLevel(root->right,current+1,level);
    }
}
void printLevelOrder(struct node* root){
    int i;
    int h=height(root);
    printf("height of tree is %d\n",h);
    for(i=0;i<=h;i++) printGivenLevel(root,0,i);
}

struct node* newNode(int data){
    struct node* node=(struct node *)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
int max(int a,int b){
    return a>b?a:b;
}
int height(struct node* root){
    if(root==NULL) return -1;
    else return 1+max(height(root->left),height(root->right));
}


int main(){
    struct node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->right->right=newNode(5);
    printf("level order traversal of binary tree is \n");
    printLevelOrder(root);
    printf("\n");
}