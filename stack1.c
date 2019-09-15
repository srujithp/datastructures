#include<stdio.h>
#define max 10
void push(int);
int pop();
void display();
void peek();
int top=-1;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int x,ch;
	do
	{
		printf("enter your choice 1.push 2.pop 3.peek : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					
					
						printf("enter the element to push : ");
						scanf("%d",&x);
						push(x);
						display();
						
					
					break;
			case 2:if(top==-1)
						printf("stack underflow");
					else
					{
						x=pop();
						printf("%d is the element popped\n",x);
						display();
						
					}
					break;
			case 3:peek();
					break;
			default : printf("enter a valid choice...");
						
		}
		printf("press 1 to continue...");
		scanf("%d",&ch);
	}while(ch==1);
	
	return 1;
}

void push(int x)
{
	top++;
	struct node *temp= (struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
int pop()
{
	int x;
	struct node* temp=head;
	head=temp->next;
	x=temp->data;
	free(temp);
	return x;
}
void display()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}
void peek()
{
	printf("%d is the top element\n",head->data);
}

