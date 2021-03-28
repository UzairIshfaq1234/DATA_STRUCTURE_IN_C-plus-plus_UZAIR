#include<iostream>
using namespace std;
main()
{
int arry[50];
int size;
int index;
int change;
//----------------------------------------------------------------
cout<<"How much data you want to enter?"<<endl;	
cin>>size;

cout<<"_______________________________________INPUT_____________________________________________"<<endl;

//filling array with data 
for(int i=0;i<size;i++)
{
	
cout<<"Enter Data in Index :"<<i<<endl;
cin>>arry[i];
cout<<""<<endl;
}	
cout<<"__________________________________________________________________________________________"<<endl;

cout<<"Enter Index where you want to change?"<<endl;
cin>>index;
cout<<"Enter value  you want to enter?"<<endl;
cin>>change;


for(int i=size-1;i>index-1;i--)
{
	
	arry[i+1]=arry[i];
	

}	

arry[index]=change;






size++;

















cout<<"_______________________________________OUTPUT_____________________________________________"<<endl;

//displaying output of array 
for(int i=0;i<size;i++)
{
	
cout<<"Enter Data at Index  "<<i<<" is :"<<arry[i]<<endl;
cout<<""<<endl;
}	
cout<<"__________________________________________________________________________________________"<<endl;
}
	
