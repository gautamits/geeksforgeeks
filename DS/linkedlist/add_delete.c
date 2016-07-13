#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
void push(struct node** head,int n){
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data=n;
	new_node->next=(*head);
	(*head)=new_node;
}
void append(struct node** head,int n){
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data=n;
	new_node->next=NULL;
	if(*head == NULL){
		*head=new_node;
		return;
	}
	struct node *last=*head;
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=new_node;
	return;
}
void addafter(struct node* head,int m,int n){
	struct node* temp=head;
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=m;
	while( (temp->data!=n )&& (temp!=NULL) ){
		printf("%d encountered,proceeding\n",temp->data);
		temp=temp->next;

	}
	if(temp==NULL){
		printf("integer not found\n");
	}
	new_node->next=temp->next;
	temp->next=new_node;
}
void del(struct node *head,int n){
	struct node *temp=head;
	if (head->data==n){
		head=head->next;
		free(temp);
		return;
	}
	struct node *prev=head;
	temp=head->next;
	while(temp->data!=n && temp!=NULL){
		temp=temp->next;
		prev=prev->next;
	}
	printf("previous is %d\n",prev->data);
	printf("next is %d\n",temp->next->data);
	prev->next=temp->next;
	free(temp);
	return;
	if(temp==NULL){
		 printf("not found\n");
		 return;
		 }
	temp->next=temp->next->next;
	free(temp->next);
}
void printl(struct node* head){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){
	struct node *head=NULL;
	int c,m,n;
	while(1){
		printf("\n1.push\n2.add after\n3.add in last\n4.delete\n");
		scanf("%d",&c);
		switch(c){
			case 1:
				scanf("%d",&n);
				push(&head,n);
				printl(head);
				break;
			case 2:
				printf("\nenter number and its predecessor\n");
				scanf("%d%d",&m,&n);
				addafter(head,m,n);
				printl(head);
				break;
			case 3:
				scanf("%d",&n);
				append(&head,n);
				printl(head);
				break;
			case 4:
				scanf("%d",&n);
				del(head,n);
				printl(head);
				break;
		}
	}
}