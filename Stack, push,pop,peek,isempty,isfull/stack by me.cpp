#include<iostream>
using namespace std;


int a[6];
int size=6;
int point=-1;	


//entering value in stack
push(int value)
{
if(point<size-1)	
{

point++;

a[point]=value;
cout<<"Value: '"<<value<<"' Is added to point "<<point <<endl;	
	
}

else
{

cout<<"array is full you cant not add any data!"<<endl;	

	
}	
	
	
}
//poping out values
pop()
{
if(point==-1)
{
cout<<"array is empty and nothing can be pop out"<<endl;
		
}	
else
{
	
cout<<"Value: '"<<a[point]<<"' is deleted at point "<<point<<endl;	
point--;
	
	
}	
	
}
//displaying whole data
display()
{
if(point==-1)
{
cout<<"SIR! Stack is empty no data can be shown!"<<endl;		
}	
	
else
{
	
for(int i=0;i<=point;i++)
{
cout<<"value at point "<<i<<" is :"<<a[i]<<endl;	
		
}	
	
}	
	
	
	
}



main()
{

cout<<"Welcome to Stack!"<<endl;
cout<<"___________________________________________________________________________________"<<endl;	
cout<<"Press 1 for entering data!"<<endl;	
cout<<"Press 2 for poping data!"<<endl;	
cout<<"Press 3 to display whole data!"<<endl;	
for(int i=0;i<100;i++)
{

int choice;	
int value;

cout<<"___________________________________________________________________________________"<<endl;	
cout<<"Enter your choice: "<<endl;
cin>>choice;	
cout<<" \n "<<endl;

if(choice==1)	
{
cout<<"____________________________________________________________________________________"<<endl;	
cout<<"enter value you want to push!"<<endl;
cin>>value;
push(value);

}
	
	
else if(choice==2)	
{
	
cout<<"____________________________________________________________________________________"<<endl;	
pop();	
}
	
	
else if(choice==3)	
{
cout<<"_____________________________________________________________________________________"<<endl;	
display();	
}
		
else
{
cout<<"____________________________________________________________________________________"<<endl;	
cout<<"Incorrect choice!"<<endl;
}	

}
	
	

	
}
