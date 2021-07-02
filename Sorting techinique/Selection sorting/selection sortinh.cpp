#include<iostream>
using namespace std;


void selectionsort(int arr[],int size)
{
	
	for(int i=0;i<size-1;i++)
	{
	int min=i;
	
	for(int j=i+1;j<size;j++)
	{
		if(arr[j]<arr[min])
		{
			
		min=j;
		
		}
	}
		
if(min!=i)
{
	
	int temp=arr[min];
	arr[min]=arr[i];
	arr[i]=temp;
	
}		
		
		
		
		
		
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
	
	
selectionsort(array,size);
cout<<endl;
cout<<"AFTER SORTING"<<endl;
for(int i=0;i<5;i++)
{
	
	
	cout<<array[i]<<"->";
	
	
	
}	
	
	
	
	
	
	
	
	
	
	
}
