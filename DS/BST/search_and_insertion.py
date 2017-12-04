class Node:
    def __init__(self,key):
        self.key=key
        self.left=None
        self.right=None
def insert(root,node):
    if root==None:
        return Node(node)
    elif root.key < node:
        root.right=insert(root.right,node)
    elif root.key > node:
        root.left=insert(root.left,node)
    return root

def inorder(root):
    if root==None:
        return
    inorder(root.left)
    print root.key,
    inorder(root.right)

r=Node(50);
insert(r,30)
insert(r,20)
insert(r,40)
insert(r,70)
insert(r,60)
insert(r,80)
inorder(r)

