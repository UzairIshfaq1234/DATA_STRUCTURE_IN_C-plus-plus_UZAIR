#include<iostream>
using namespace std;

struct person
{
string name;
int phone;
	
	
	
	
};

main()
{
	
int size;
cout<<"How people data you want to enter?"<<endl;
cin>>size;

struct person p[size];
	
int i;
	
for(i=0;i<size;i++)
{
cout<<"Enter name :"<<endl;
cin>>p[i].name;
		
cout<<"Enter phone :"<<endl;
cin>>p[i].phone;
cout<<"___________________________________"<<endl;
			
}
	
cout<<"___________________________________"<<endl;
for(i=0;i<size;i++)
{
cout<<"Name :"<<p[i].name<<endl;		
cout<<"Phone Number :"<<p[i].phone<<endl;
cout<<"___________________________________"<<endl;

			
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
