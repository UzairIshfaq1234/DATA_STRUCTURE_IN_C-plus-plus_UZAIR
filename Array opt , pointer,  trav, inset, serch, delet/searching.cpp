#include<iostream>
using namespace std;
main()
{

int arry[100];
int size;
int serch;


cout<<"How much data you want?"<<endl;	
cin>>size;
cout<<"___________________________________"<<endl;


//fffffffffffffffffffiiiiiiiiiiiiiiiiiiillllllllllliiiiinnnnnnnggggggggggg
for(int i=0;i<size;i++)
{

cout<<"Enter number to index "<<i<<endl;
cin>>arry[i];		
}

cout<<"___________________________________"<<endl;

cout<<"What value you want to search?"<<endl;
cin>>serch;
cout<<"___________________________________"<<endl;

for(int i=0;i<size;i++)
{
	
	if(arry[i]==serch)
	{
		
		cout<<"Value "<<serch<<" is at index "<<i<<endl;
		break;
		
		
		
	}
	
	else{
		
		
		
		cout<<"Searching"<<endl;
		//break;
		
	}


		
}

}



















	

