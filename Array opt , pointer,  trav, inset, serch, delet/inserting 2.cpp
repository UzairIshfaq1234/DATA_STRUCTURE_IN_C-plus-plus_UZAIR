#include<iostream>
using namespace std;
main()
{

int arry[100];
int need;
int indexc;
int value;

cout<<"How much data you want?"<<endl;	
cin>>need;
cout<<"___________________________________"<<endl;
for(int i=0;i<need;i++)
{

cout<<"Enter number to index "<<i<<endl;
cin>>arry[i];		
}

cout<<"___________________________________"<<endl;
	
for(int j=0;j<need;j++)
{

cout<<"Number on index "<<j<<" :"<<arry[j]<<endl;
		
}

cout<<"___________________________________"<<endl;
cout<<"Enter index for replace : "<<endl;
cin>>indexc;

cout<<"Enter Value to replace : "<<endl;
cin>>value;
	
if(indexc>=need)
{

cout<<"Invalid number! \n This  index is not found!"<<endl;



}

else
{
	
	
	for(int k=need-1;k>indexc-1;--k)
{
	arry[k+1]=arry[k];


		
}

cout<<"___________________________________"<<endl;
cout<<"___________________________________"<<endl;
cout<<"___________________________________"<<endl;

arry[indexc]=value;

need++;

	
for(int j=0;j<need;j++)
{

cout<<"Number on index "<<j<<" :"<<arry[j]<<endl;
		
}
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
