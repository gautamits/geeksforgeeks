
public class SearchAndInsertion{
class Node {
        int key;
        Node left, right;
 
        public Node(int item) {
            key = item;
            left = right = null;
        }
    }
 
    // Root of BST
    Node root;
 
    // Constructor
    SearchAndInsertion() { 
        root = null; 
    }

    void insert(int key) {
       root = insertRec(root, key);
    }

    public void inOrderRec(Node root){
        if(root==null) return;
        inOrderRec(root.left);
        System.out.print(root.key+" ");
        inOrderRec(root.right);
    }

    public Node insertRec(Node root,int data){
        if(root==null)
        {
            root = new Node(data);
            return root;
        }
        else if(root.key < data)
            root.right = insertRec(root.right,data);
        else
            root.left = insertRec(root.left,data);
        return root;
    }
    void inOrder(){
        inOrderRec(root);
    }
    public static void main(String[] args){
        SearchAndInsertion tree = new SearchAndInsertion();
 
        /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
        tree.insert(50);
        tree.insert(30);
        tree.insert(20);
        tree.insert(40);
        tree.insert(70);
        tree.insert(60);
        tree.insert(80);
 
        // print inorder traversal of the BST
        tree.inOrder();
        
    }
}