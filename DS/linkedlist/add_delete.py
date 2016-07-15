class Node:
	def __init__(self,data):
		self.data=data
		self.next=None

class LinkedList:
	def __init__(self):
		self.head=None
	def push(self,data):
		new_node=Node(data)
		new_node.next=self.head
		self.head=new_node

	def append(self,data):
		new_node=Node(data)
		new_node.next=None
		if self.head==None:
			self.head=new_node
			return
		last=self.head
		while(last.next):
			last=last.next
		last.next=new_node
		return
	def del(self,data):
		temp=self.head.next
		prev=self.head
		while(temp.data!=data):
			temp=temp.next
			prev=prev.next
		prev.next=temp.next
		
