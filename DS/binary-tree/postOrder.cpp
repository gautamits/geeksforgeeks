//postorder traversal of tree whn inorder and prorder traversals are given

//root is always first item in preorder
//all elements before root in in[] are left subtree and after in[] are right subtree
//in pre[] all elements after index of root in in[] are right subtree

#include <iostream>
using namespace std;
int search(int arr[],int x,int n)//arr,element,length, returns index 
{
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i;
    }
    return -1;
}
void printPostOrder(int in[],int pre[],int n){
    int root=search(in,pre[0],n);
    //if left subtree is not empty print left subtree
    if(root!=0){
        printPostOrder(in,pre+1,root);
    }
    //if right subtree is not empty print right subtree
    if(root!=n-1)
        printPostOrder(in+root+1,pre+root+1,n-root-1);
    //print root
    cout<<pre[0]<<" ";
}
int main(){
    int in[]={4,2,5,1,3,6};
    int pre[]={1,2,4,5,3,6};
    cout<<"postorder traversal\n";
    printPostOrder(in,pre,sizeof(in)/sizeof(in[0]));
    cout<<endl;
    return 0;
}