#include<stdio.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void insert(int);
void display();

int main()
{
	int x,ch;
	do
	{
		printf("enter your choice 1.insert 2.display");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the element to insert");
					scanf("%d",&x);
					insert(x);
					break;
			case 2:printf("The elemnts in the linked list are : ");
					display();
					break;
			default:printf("enter a valid choice");
		}
		printf("press 1 to continue :");
		scanf("%d",&ch);
	}while(ch==1);
}

void insert(int x)
{
	struct node *temp= (struct node*)malloc(sizeof(struct node)),*temp1,*temp2;
	
	if(head==NULL)
	{
		temp->data=x;
		head=temp;
		temp->next=NULL;
		return;
	}
	temp1=head;
	temp2=head->next;
	temp->data=x;
	while(temp2->data<temp->data)
	{
		temp1=temp1->next;
		temp2=temp2->next;
	}
	temp->next=temp2;
	temp1->next=temp;
}

void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
	

