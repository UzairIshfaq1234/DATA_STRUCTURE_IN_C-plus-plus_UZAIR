#include<iostream>
using namespace std;


insertionsort(int arr[],int size)
{
	int j=0;
	int temp= 0;
	
	for( int i =1; i<=size-1; i++)
	{
		temp= arr[i]; // pick the element
		j =i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
}


int main()
{
int size=5;
int array[size];

cout<<"Enter values to array!"<<endl;
for(int i=0;i<5;i++)
{
	
	
	cin>>array[i];
	
	
	
}
	
cout<<"BEFORE SORTING"<<endl;
for(int i=0;i<5;i++)
{
	
	
	cout<<array[i]<<"->";
	
	
	
}	
	
	
insertionsort(array,size);
cout<<endl;
cout<<"AFTER SORTING"<<endl;
for(int i=0;i<5;i++)
{
	
	
	cout<<array[i]<<"->";
	
	
	
}	
	
	
	
	
	
	
	
	
	
	
}
