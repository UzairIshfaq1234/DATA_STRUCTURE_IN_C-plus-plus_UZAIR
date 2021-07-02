#include<iostream>
#define size 5
using namespace std;
class Queue
{
	public:
	int front=-1;
	int rear=-1;
	int queue[size];
	void enqueue(int x)
	{
		if(front==rear)
		{
			front=rear=0;
		}
	else if(rear>=size)
	{
		cout<<"Queue is full\n";
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
	}
		
	void DeQueue()
{
	if(front==-1 && rear==-1)
	{
		cout<<"Underflow / Queue is empty\n";
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		cout<<queue[front];
		front++;
	}
	}
	void display()
	
	{
		if(front==-1 && rear==-1)
		{
			cout<<"Queue is empty\n";
		}
		else
		{
			for(int i=front;i<rear+1;i++)
			{
				cout<<queue[i];
			}
		}
		}
};
main()
{
	Queue obj;
	obj.enqueue(1);
	cout<<"\n";
	obj.enqueue(2);
	cout<<"\n";
	obj.enqueue(3);
	cout<<"\n";
	obj.enqueue(4);
	cout<<"\n";
	obj.enqueue(5);
	cout<<"\n";
	obj.display();
}

