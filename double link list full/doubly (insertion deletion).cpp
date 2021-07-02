# include <iostream>
using namespace std;

int count = 0;

struct node {
	int data;
	node* next;
	node* prev;
	node (int value)
	{
		data=value;
	}*nn, *temp;
	node* head;
	node* tail;
};



//create new node 

void createlist (int data){
	node * new_node= new node(data);
	
	if(head==NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		head = new_node;
		tail = new_node;
		count ++;
	
	}
}

// insert at beginning

void insert_at_first (int data)
{
	node * new_node = new node(data);
	if(head==NULL && tail == NULL)
	{
		cout<<"crate the list first"<<endl;
	}
	else
	{
		new_node-> next = head;
		new_node-> prev = NULL;
		head->prev = new_node;
		head = new_node;
		count++;
	}
}


// insert at the end 

void insert_at_last(int data)
{
	node * new_node = new node(data);
	if (head == NULL && tail == NULL)
	{
		cout<<"create the list first"<<endl;
	}
	else
	{
		new_node->next = NULL;
		tail->next = new_node;
		new_node->prev = tail;
		tail= new_node;
		count ++;
	}
}

//insert at specfic position

void insert_at_specific_pos (int data, int pos)
{
	int noofnode= 1;
	nn = new node(data);
	temp= head;
	node * temp2;
	while(temp!= NULL)
	{
		if(pos-1 == noofnode)
		{
			temp2->prev=temp;
			temp2->next = temp->next;
			temp->next->prev= temp2;
			temp->next=temp2;
			count++;
		}
		noofnode++;
		temp = temp->next;
	}
}

//deletion
//delete at first

void deletefirst()
{
	temp=head->next;
	head=NULL;
	head=temp;
	head->prev = NULL;
}



//delete at last

void deletelast()
{
	temp=tail->prev;
	tail=NULL;
	tail=temp;
	tail->next= NULL;
}

//delete at specfic position
 void  delete_at_specfic_pos (int pos)
 {
 	int no_ofnode =1;
 	node * temp2;
 	node * temp3;
 	temp= head;
 	while (temp! = NULL)
 	{
 		if(pos-1 == no_ofnode)
 		{
 			
		 }
		 no_ofnode ++;
		 temp = temp->next;
	 }
 }


























