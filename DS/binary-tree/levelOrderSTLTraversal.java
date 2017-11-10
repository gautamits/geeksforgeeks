import java.util.Queue;
import java.util.LinkedList;
class Node{
    int data;
    Node left,right;
    public Node(int item){
        data=item;
        left=null;
        right=null;
    }
}
public class levelOrderSTLTraversal{
    Node root;
    void printLevelOrder(){
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        while(!q.isEmpty()){
            Node temp = q.poll();
            System.out.print(temp.data+" ");
            if(temp.left!=null) q.add(temp.left);
            if(temp.right!=null) q.add(temp.right);
        }
    }
    public static void main(String[] args){
        levelOrderSTLTraversal tree = new levelOrderSTLTraversal();
        tree.root=new Node(1);
        tree.root.left=new Node(2);
        tree.root.right=new Node(3);
        tree.root.left.left=new Node(4);
        tree.root.right.right=new Node(5);
        tree.printLevelOrder();
    }
}