/*
Alternately sort an unsorted array..

eg) i/p {5,2,8,7,4,3,9}
      o/p {9,2,8,3,7,4,5}

*/



#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],c[10];
	int temp;
	int size;
	cout<<"Ente the size of string";
	cin>>size;
	cout<<"Enter the elements of string";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
		b[i]=c[i]=a[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=1;j<size;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<c[i]<<" ";		
	}

	
	for(int i=0;i<size;i++)
	{
		for(int j=1;j<size;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	int j,k;
	j=k=0;
	for(int i=0;i<size;i++)
	{
		if(i%2==0)
		cout<<c[k++]<<" ";
		else
		cout<<b[j++]<<" ";
		
	}
	
	
	
}
