#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;	
	
	
};
int noofnodes=0;
struct Node *head;
struct Node *tail;	
struct Node *temp;	
struct Node *temp2;	

struct Node *newnode;	


//////-----------------------------------CREATION OF LIST-------------------------------------------////////

void create_list(int data)
{
	if(head!=NULL)
	{
		
		cout<<"<---------List is Already Created!-------->"<<endl;
		
	}
	else
	{
	
	temp = new Node();
	head=temp;
	
	temp->data=data;
	temp->next=NULL;
	
	tail=head;
	
	noofnodes++;
	}
}
//////-----------------------------------INSERTION AT FIRST-------------------------------------------////////
void inseartatfirst(int data)
{
	if(head==NULL)
	{
	cout<<"<---------ALERT!! CREATE LIST FIRST -------->"<<endl;
	}
	else
	{	
	
	temp = new Node();
	temp->data=data;
	temp->next=head;
	
	head=temp;

	
	
	noofnodes++;
	
	}
}
//////-----------------------------------INSERTION AT LAST-------------------------------------------////////
void insertionatlast(int data)
{
	if(head==NULL)
	{
	
	cout<<"<---------ALERT!! CREATE LIST FIRST -------->"<<endl;
	}
	
	else
	{
		
	temp=new Node();
	temp->data=data;
	temp->next=NULL;
	
	tail->next=temp;
	tail=temp;
	
	noofnodes++;
	
		
	}
	
	
}

//////-----------------------------------INSERTION AT SPECIFIC POSTION-------------------------------------------////////
void insertionatspecificposition(int data,int position)
{
	if(head==NULL)
	{
	cout<<"<---------ALERT!! CREATE LIST FIRST -------->"<<endl;
	}
	
	else
	{
	newnode=new Node();
	newnode->data=data;
	
	temp=head;
	
	for(int i=1;i<position-1;i++)
	{
		
	temp=temp->next;
	}
	
	newnode->next=temp->next;
	temp->next=newnode;
	
	noofnodes++;
		
		
	}	
	
	
	
	
}

//////-----------------------------------DELETION AT FIRST POSTION-------------------------------------------////////
void deleteatstart()
{
	
	temp=head;
	head=temp->next;
	delete(temp);
	
	noofnodes--;
		
}
//////-----------------------------------DELETION AT last POSTION-------------------------------------------////////

void deleteatlast()
{
	
	temp=head;
	
	while(temp->next!=tail)
	{
		
		temp=temp->next;
		
	}
	
	tail=temp;
	temp->next=NULL;
	noofnodes--;
	
	
	
}
//////-----------------------------------DELETION AT specific POSTION-------------------------------------------////////
void deletatspecificposition(int pos)
{
	
	temp=head;
	
	for(int i=1;i<pos-1;i++)
	{
		
	temp=temp->next;		
	}
	temp2=temp->next;
	temp->next=temp2->next;
	delete(temp2);
	
	noofnodes--;
	
	
	
	
	
}


//////-----------------------------------DISPLAYING LIST-------------------------------------------////////

void display()
{
	temp=head;
	
	while(temp != NULL)
	{
	cout<<temp->data<<" -> ";
	temp=temp->next;
	
	}

	
	
}




int main()
{


	create_list(1);
	insertionatlast(2);
	insertionatlast(3);
		insertionatlast(4);
			insertionatlast(5);
				insertionatlast(6);
	deletatspecificposition(3);

	//deleteatstart();
	
	display();







/*	while(true)
	
	{
	
	int data;
	int data1;
	int data2;
	int data3;
	int pos;

	
	cout<<"<--------------WELCOME TO LINK LIST INSERTION----------------->"<<endl;
	cout<<"1:Create list"<<endl;
	cout<<"2:insert at first in list"<<endl;
	cout<<"3:insert at last in list"<<endl;
	cout<<"4:Insert at specific position in list"<<endl;
	cout<<"5:Display list"<<endl;
		cout<<"______________________________________________"<<endl;


	cout<<endl;
	int choice;
	cout<<"Enter your choice?"<<endl;
	cin>>choice;
	
	if(choice==1)
	{
			cout<<"______________________________________________"<<endl;

	cout<<"Enter A number:"<<endl;
	cin>>data;
	
	create_list(data);
		
		
	}
	
		if(choice==2)
	{
			cout<<"______________________________________________"<<endl;
	
	cout<<"Enter A number:"<<endl;
	cin>>data1;
	
	inseartatfirst(data1);
		
	}
	
		if(choice==3)
	{		cout<<"______________________________________________"<<endl;

			cout<<"Enter Position:"<<endl;
			cin>>data3;
		
		insertionatlast(data3);

	}
	
	
		if(choice==4)
	{
			cout<<"______________________________________________"<<endl;
	
	cout<<"Enter Position:"<<endl;
	cin>>pos;
		
	cout<<"Enter A number:"<<endl;
	cin>>data2;
	
	insertionatspecificposition(data2,pos);
		
		
	}



		if(choice==5)
	{
		
			cout<<"______________________________________________"<<endl;

		display();
		cout<<endl;
		
		
	}
	

}

*/




}











