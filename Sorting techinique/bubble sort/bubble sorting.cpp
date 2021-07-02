#include<iostream>
using namespace std;


bubblesort(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		
		
		for(int j=0;j<size-1;j++)
		{
			
			if(a[j]>a[j+1])
			{
				
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
			
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
	
	
bubblesort(array,size);
cout<<endl;
cout<<"AFTER SORTING"<<endl;
for(int i=0;i<5;i++)
{
	
	
	cout<<array[i]<<"->";
	
	
	
}	
	
	
	
	
	
	
	
	
	
	
}
