#include<iostream>
using namespace std;
main()
{

int arry[100];
int size;
int update;
int indexs;



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


cout<<"At what index you want to change?"<<endl;
cin>>indexs;


cout<<"What value you want to update?"<<endl;
cin>>update;


arry[indexs]=update;

cout<<"___________________________________"<<endl;


for(int i=0;i<size;i++)
{

cout<<"Value at index "<<i<<":"<<arry[i]<<endl;
}















}

