import java.util.Stack;
class Node{
    int data;
    Node left,right;
    public Node(int item){
        data=item;
        left=null;
        right=null;
    }
}

class InorderTraversalUsingStack{
    Node inorder(){
        if(root==null) return;
    }

    Stack<Node> stack = new Stack<Node>();
    Node node=root;
    while(node!=null){
        stack.push(node);
        node=node.left;
    }

}