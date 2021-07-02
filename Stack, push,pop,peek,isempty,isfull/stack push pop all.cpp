#include<iostream>
using namespace std;


//declaring array and size and pointer
int a[100];
int top=-1;


//confirming that array is empty or not
bool isempty()
{
if(top==-1)
{
return true;	
}	
else
{
	
return false;	
}
}

	
//entering value using push 
void push(int value)
{
if(top==6-1)
{
cout<<"Sir! Stack is full. You can't add more data!.'"<<endl;
}
else
{
top++;
a[top]=value;
}

}	
	
//poping out values or deleting out values
void pop()
{
if(isempty())
{
cout<<"Stack is empty!"<<endl;
}
else
{
top--;	
}
}	
	
//showing top value of the stack 	
void show_top()
{
if(isempty())
{
cout<<"stack is empty"<<endl;
}	
else
{
cout<<"Element at the top of stack is:"	<<a[top]<<endl;	
}	
	
}	
//displaying all data 
void displaystack()
{
if(isempty())	
{
cout<<"Stack is empty!"<<endl;	
}

else
{
for(int i=0;i<=top;i++)
{
cout<<a[i]<<endl;	
	
}	
	
	
}	
	
	
	
	
}

	
	






main()
{

push(3);
push(4);
push(10);
push(3);
push(4);
push(10);
displaystack();
cout<<"_____________________"<<endl;	
pop();	
pop();	
pop();	
displaystack();
	
	
	
	
	
	
	
	
}
