#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	
	int arry[100];
	int total=100;
	int size;
	int changeindex;
	int changenumber;
	
	cout<<"How much data you want to add: "<<endl;
	cin>>size;
	
	
	cout<<endl;
	cout<<"___________________________________________"<<endl;
	for(int i=0;i<size;i++)
	{
		
		cout<<"enter value for index "<<i<<endl;
		cin>>arry[i];
		
	}
	
	cout<<"___________________________________________"<<endl;
	
	for(int i=0;i<size;i++)
	{
		
		cout<<"INDEX "<<i<<"="<<arry[i]<<endl;
		
		
	}
	

	
	
	
	
	
	
}
