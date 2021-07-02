#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
	
	

};
struct node *nn;
struct node *temp;
struct node *temp2;
struct node *front=0;
struct node *rear=0;

void enqueue (int x)
{
	
	
	nn=new node;
	nn->data=x;
	nn->next=NULL;
	
	if(front==0 && rear==0)
	{
		
	front=rear=nn;
			
	}
	else
	{
	
	rear->next=nn;
	rear=nn;
				
	}
	
}

void dequeeue()
{
	*temp2;
	temp2=front;
	front=front->next;
	
	delete temp2;
	
	
	
	
	
	
}

void display()
{
	//*temp;
	
	if (rear==0 && front==0)
	{
	
	cout<<"There is nothing in tha queue"<<endl;
	}
	else
	{
		temp=front;
		
		while(temp!=NULL)
		{
			
		cout<<temp->data<<"->"<<endl;
		temp=temp->next;	
			
		}	
	
	
		
		
	}
	
	
}



int main()
{
	

	
enqueue(1);
enqueue(3);
dequeeue();
enqueue(2);	
display();	
	
	
	
}

