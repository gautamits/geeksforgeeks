#include <iostream>
#include <cstdio>
using namespace std;
//created by amit kumar gautam
//05/12/2017
//implementation of binary search tree and significance of inorder,preorder and postorder
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
struct node* insert(node* root,int n){
    if(root==NULL){
        root=newNode(n);
        return root;
    }
    else if(n < root->data){
        root->left=insert(root->left,n);
    }
    else{
        root->right=insert(root->right,n);
    }
    return root;
}
void inOrder(node *root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void postOrder(node *root){
    if(root==NULL) return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}
//range creates an array of given size
void range(int *array,int length,int start=0,int step=1){
    *array++ = start;
    for( int i = 1 ; i < length ; i++ ){
        *array++ = start+i*step;
        //array[i] = start+step;
    }
}
void printArray(int *arr,int n,int rev=0,int step=1){
    if(step==0){
        cout<<"step cannot be zero\n";
        return;
    }
    if(rev == -1){
        //print in reverse
        for(int i=n-1 ; i>=0 ; i-=step){
            cout<<arr[i]<<" ";
        } 
    }
    else{
        for(int i=0;i<n;i+=step){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl<<endl;
}
int main(){
    int n=10;
    int arr[n];
    range(arr,10,1,2);
    
    int arr2[n];
    range(arr2,n,2,2);
    struct node *root=newNode(arr[0]);
    
    cout<<"inserting ";
    printArray(arr,n);
    for(int i=1;i<n;i++){
        insert(root,arr[i]);
    }
    
    cout<<"inserting ";
    printArray(arr2,n,-1);
    for(int i=n-1;i>=0;i--){
        insert(root,arr2[i]);
    }
    
    cout<<"Inorder traversal\n"; inOrder(root); cout<<endl<<endl;
    cout<<"Preorder traversal\n"; preOrder(root); cout<<endl<<endl;
    cout<<"Postorder traversal\n"; postOrder(root); cout<<endl<<endl;

    return 0;
}