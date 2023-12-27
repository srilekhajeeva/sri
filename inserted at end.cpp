#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL;
struct node*current=NULL;
void printlist()
{
	struct node*p=head;
	printf("\n[");
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("]");
}
void insertend(int value)
{
	struct node * newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(head==NULL)
	 head=new node;
	 else
	 {
	 	struct node*temp=head;
	 	while(temp->next!=NULL)
	 	temp=temp->next;
	 	temp->next=new node;
	}
	printf("\n one node inserted !!! \n");
}
