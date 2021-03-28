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




int pos;

cout << "Enter the position \n";
cin  >> pos;
   
//Shift element from i+1 to i
for(int i = pos-1; i < size; i++) 
{
arry[i] = arry[i+1];  

}

size--;









cout<<"_______________________________________OUTPUT_____________________________________________"<<endl;

//displaying output of array 
for(int i=0;i<size;i++)
{
	
cout<<"Enter Data at Index  "<<i<<" is :"<<arry[i]<<endl;
cout<<""<<endl;
}	
cout<<"__________________________________________________________________________________________"<<endl;
}
	
