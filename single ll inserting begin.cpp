#include<stdio.h>
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
  	struct node * p=head;
  	printf("\n[");
  	while(p!=NULL)
  	{
  	  printf("%d ",p->data);
		p=p->next;	
	}
	printf("]");
  }
  void insertbegin(int data)
  {
  	struct node*lk=(struct node*)malloc(sizeof(struct node));
  	lk->data=data;
  	lk->next=head;
  	head=lk;
  }
  int main()
  {
   int k=0;
  	insertbegin(12);
  	insertbegin(22);
  	insertbegin(30);
  	insertbegin(44);
  	insertbegin(50);
  	printf("linked list:");
  	printlist();
  }
  
