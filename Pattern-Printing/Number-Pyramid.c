#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n=8,repna = 1,value = 1;
	//this loops for n(8) no of times
	for(i =1;i<=n;i++)
	{
		//this loop is for empty space  
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		value = 1;//value is set as 1 so as to display first term as 1
		//loop for the values
		for(k=1;k<=repna;k++)
		{
			printf("%d",value);
			if(i!=1)
			{
				//for increasing the value like 1234
				if(k<=repna/2)
				{
					value++;
				}
				//for decreasing the value like 4321
				else
				{
					value--;	
				}				
			}
		}
		printf("\n");
		repna = repna + 2;
	}
}
