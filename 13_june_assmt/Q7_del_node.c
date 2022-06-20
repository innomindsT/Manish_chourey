//Write a function to delete n-th node from reverse of a singly linked list
//struct node * delete_nth_node(struct node *root, int n);
//program to delete the nth node from the reverse in the singly linked list

#include<stdio.h>
#include<stdlib.h>
int num,cou=1;

struct node
{
	int data;
	struct node *next;
};
void insertion(struct node **head)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	temp->data=n;
	temp->next=NULL;
	struct node *p=*head;
	if (p==NULL)
	{
		*head=temp;
	}
	else 
	{
		while (p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
	cou++;
	printf("inserted successfully\n");
}
void deletion(struct node **head)
{
	struct node *p=*head;
	struct node *q=NULL;
	int pos,count=1;
	printf("Enter the position :\n");
	scanf("%d",&pos);
	
	while (p!=NULL)
	{	if (count==(cou-pos))
			break;
		
		q=p;
		p=p->next;
		count++;
	}
	if (p==NULL)
		printf("There is no position exit\n");
	else if (q==NULL)
	{
		*head=p->next;
		p->next=NULL;
		free(p);
		
	}
	else 
	{
		q->next=p->next;
		p->next=NULL;
		free(p);
		
	}
	printf("Deleted successfully \n");
	cou--;
}
void print_list(struct node **head)
{
	struct node *p=*head;
	if (p==NULL)
		printf("No elements are present\n");
	else
	{
	printf("The elements in the linked list :");
	while (p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
	}
}
	
int main()
{
	struct node *head=NULL;
	printf("implementing the singly linked list\n");
	do
	{
	printf("1 : Insertion\n2 : Deletion\n3 : Print the list\n4 : End the execution\n");
	
	printf("Enter your choice from above options(1-4) :");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
			insertion(&head);
			break;
		case 2:
			deletion(&head);
			break;
		case 3:
			print_list(&head);
			break;
		case 4:
			printf("Exiting the loop\n");
			break;
		default:
			printf("invalid choice entered please try again with (1-4) \n");
	return 0;
	}
	}while (num !=4);
	
	return 0;
}

