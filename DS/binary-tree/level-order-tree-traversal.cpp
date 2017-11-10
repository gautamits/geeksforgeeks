//tree traversal using queue
#include <iostream>
#include <queue>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
};
void printLevelOrder(Node *root){
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
        Node *node=q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left!=NULL){
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
    }
}
Node* newNode(int data){
    Node *temp=new Node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->right->right=newNode(5);
    cout<<"level order traversal of binary tree is "<<endl;
    printLevelOrder(root);
    cout<<endl;
}