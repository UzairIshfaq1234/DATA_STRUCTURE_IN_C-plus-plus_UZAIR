#include<iostream>
#include<conio.h>
#define size 15




using namespace std;


int queue[size],front=0,rear=0,b;
int res;
void enqueue();
void dequeue();
void display();


main()
{
int c;


cout<<"1.Insertion"<<endl<<"2.Deletion"<<endl<<"3.Display";
do
{
cout<<"Enter your Choice :: "<<endl;
cin>>c;
switch(c)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;

   case 3:
cout<<"\n\nContents of queue is \t"<<endl;
display();
break;
default:
cout<<"\nInvalid Choice......"<<endl;
exit(0);
}
}while(c<4);
getch();
}
void enqueue()
{
if(rear>=size)
{
cout<<"Overflow"<<endl;

}
else
{
cout<<"Enter the number to be entered :: "<<endl;
cin>>b;
rear++;
queue[rear]=b;
if(front==0)
{

front=1;
}
}
}


void dequeue()
{
if(front==0)
{
cout<<"Underflow"<<endl;

}
else
{
res=queue[front];
if(front==rear)
{
front=0;
rear=0;
}
else
front++;
}
cout<<res<<endl;


}
void display()
{
int i;
if(front==0)
{
cout<<"\nUnderflow";
return;
}
for(i=front;i<=rear;i++)
{

cout<<queue[i]<<endl;
}
