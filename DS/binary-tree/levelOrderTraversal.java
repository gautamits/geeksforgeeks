class Node{
    int data;
    Node left,right;
    public Node(int item){
        data=item;
        left=null;
        right=null;
    }
}
class levelOrderTraversal{
    Node root;
    public levelOrderTraversal(){
        root=null;
    }
    void printLevelOrder(){
        int h=height(root);
        for(int i=0;i<=h;i++){
            printGivenLevel(root,0,i);
        }
        }
    int height(Node root){
        if(root==null) return -1;
        else return 1+max(height(root.left),height(root.right));
    }
    int max(int a,int b){
        return a>b?a:b;
    }
    void printGivenLevel(Node root,int cur,int level){
        if(root==null) return;
        if(cur==level){
            System.out.print(root.data+" ");
            return;
        }
        printGivenLevel(root.left,cur+1,level);
        printGivenLevel(root.right,cur+1,level);
    }
    public static void main(String[] args){
        levelOrderTraversal tree = new levelOrderTraversal();
        tree.root=new Node(1);
        tree.root.left=new Node(2);
        tree.root.right=new Node(3);
        tree.root.left.left=new Node(4);
        tree.root.right.right=new Node(5);
        System.out.println("level order traversal for tree is ");
        tree.printLevelOrder();
    }
    }