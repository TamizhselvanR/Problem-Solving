/*
Input : 120

Output : 1111000


 120 
 60  0
 30  0
 15  0
 7   1
 3   1
 1   1


*/

#include<iostream>
using namespace std;
int main()
{
	int n,i=0,a[10];
	cin>>n;
	while(n > 1)
	{
		if(n%2==0)
		{
			a[i]=0;
			i++;
		}
		else
		{
			a[i]=1;
			i++;
		}
		n=n/2;
 	if(n==1)
		{
		a[i]=n;
		goto j1;
		}
		
	}
	j1:
	for(int j=i;j>=0;j--)
	cout<<a[j];
	return 0;
}

