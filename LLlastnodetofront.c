#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* createnode(int d)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	newnode->data=d;
	newnode->next=NULL;
	return newnode;
}

Node* lasttofront(Node* head)
{ if (head==NULL||head->next==NULL)
     return head;
		Node*last1=head;
		Node* last2=NULL;
	while(last1->next!=NULL)
	{     
	     last2=last1;
	     last1=last1->next;
	}
	last2->next=NULL;  //Break the node
	last1->next=head;
	head=last1;  //Connect the node 
	return head;
}

int main()
{
int n,d;
scanf("%d",&n);
Node* head=NULL;
Node* temp=NULL;
Node* newnode=NULL;
for(int i=0;i<n;i++)
{
	scanf("%d",&d);
	newnode=createnode(d);
	if(head==NULL)
	{
		head=newnode;
		temp=head;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}	
head=lasttofront(head);
temp=head;

while(temp!=NULL)
{
	printf("%d",temp->data);
	temp=temp->next;
}
return 0;
}
