/*
Given an array, find the next element to current element in sorted format.
Sample: 
Array : {2, 3, 7, ­1, 8, 5, 11} 
   
Output: 
{2­>3, 3­>5, 7­>8, ­1­>2, 8­>11, 5­>7, 11­>} 
*/
#include<iostream>
using namespace std;
int main()
{
	int a[7],b[7];
	int temp;
	for(int i=0;i<7;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=0;i<7;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(int i=0;i<7;i++)
	{
		cout<<b[i]<<" ";
	}
	for(int i=0;i<7;i++)
	{
		cout<<a[i]<<"->";
		for(int k=0;k<7;k++)
		{
			if(b[k]>a[i])
			{
			cout<<b[k]<<"  ";
			break;
			}
		}	
	}
	return 0;
}
