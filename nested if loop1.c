#include<stdio.h>
int main()
{
	int num=20;
	if (num>0)
	{
			printf("number is positive.\n");
		if (num % 2==0)
		{
		printf("number is even.\n");	
		}
		else
		{
		printf("number is odd.\n");	
		}
    }	 	
		else
		{
			printf("number is non-positive.\n");	
		}
		return 0;	
		
	}
