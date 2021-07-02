#include<iostream>
#define size 3
using namespace std;


int arr[size];
int rear =-1;
int front=-1;


//----------------------------------------ENQUEUE CODE-----------------------------------
void enqueue(int value)
{
	if(rear==-1 && front==-1)
	{
		
	rear=0;
	front=0;
	arr[rear]=value;
		
	}
	else if(rear==size-1)
	{
		
		cout<<"-------DEAR! QUEUE IS FULL!-----"<<endl;
		
		
	}
	
	else
	{
		
		rear++;
		arr[rear]=value;
	}
	
	
	
}
//-------------------------------------------DEQUEUE CODES----------------------------------
void dequeue()
{
	int x=0;
	if(rear==-1 && front==-1)
	{
	
	cout<<"-----------DEAR! QUEUE IS EMPTY AND NOTHING CAN BE DEQUEUED----------------"<<endl;
		
	}
	else if(front==rear)
	{
	
	x=arr[front];
		
	front=-1;
	rear=-1;
	
	cout<<"VALUE DEQUEUED IS :"<<x<<endl;
	}
	
	else
	{
	
	x=arr[front];
	front++;
	cout<<"VALUE DEQUEUED IS :"<<x<<endl;
	}
	
}
//----------------------------------DISPLAY------------------------------
void Display()
{
	
	if(rear==-1 && front==-1)
	{
	
	cout<<"-----------DEAR! QUEUE IS EMPTY AND NOTHING CAN BE DISPLAYED----------------"<<endl;
		
	}	
	
	else
	{
		
	cout<<"_________________________"<<endl;		

	for(int i=front;i<=rear;i++)
	{
		
	cout<<"VALUE IS "<<arr[i]<<endl;

	
		
	}	
		
	cout<<"_________________________"<<endl;		
	for(int i=front;i<=rear;i++)
	{
	cout<<arr[i]<<"->";	
		
	}
		
	}
	
	
}


int main()
{
	
	cout<<"-----------------------------WELCOME TO QUEUE-----------------------"<<endl;
	cout<<endl;
	cout<<"\t \t   PRESS 1:ENQUEUE(Inserting Value!)"<<endl;
	cout<<"\t \t   PRESS 2:DEQUEUE(Removing Value!)"<<endl;
	cout<<"\t \t   PRESS 3:DISPLAY(Displaying Value!)"<<endl;
	
while(true)
{

	int z;
	int c;
	cout<<endl;
	cout<<endl;

	cout<<"WHICH QUEUE OPERATION YOU WANT TON PERFORM?"<<endl;
	 cin>>c;
	cout<<endl;
	
	if(c==1)
	{
	cout<<"ENTER VALUE YOU WANT TO INSEART!"<<endl;
	cin>>z;
	enqueue(z);
	}
	
	if(c==2)
	{
	dequeue();	
	}
	
	if(c==3)
	{
	Display();	
	}
	
	
	
	
	
	
}



}












