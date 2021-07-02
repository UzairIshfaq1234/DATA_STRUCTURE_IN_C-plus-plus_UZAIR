#include <iostream>
using namespace std;


struct node
{
	int data;
	struct node *next;
		
	
	
};
//creating new link list
void create(struct node **head,int value)
{
	struct node *newnode=new node;
	newnode->data=value;
	newnode->next=(*head);
	(*head)=newnode;
}
//displaying list using while loop
void display(struct node *node)
{
	
while(node!=NULL)
{	
cout<<node->data<<endl;
node=node->next;	
}	
	
}


int main()
{
	
struct node *head=NULL;
	
create(&head,1);
create(&head,2);
create(&head,3);
create(&head,4);
create(&head,5);
create(&head,6);



cout<<"___________________DISPLAYING LINK LIST_____________________"<<endl;
display(head);


return 0;


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
