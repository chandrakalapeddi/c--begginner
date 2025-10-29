#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks:");
	scanf("%d",&marks);
	if (marks >=90)
	{
		printf("the grade is A\n");
	}
	else if (marks>=80)
	{
			printf("the grade is B\n");
	}
	else if(marks>=70)
		{
			printf("the grade is C\n");	
	}
	else if(marks>=60)
		{
			printf("the grade is D\n");	
	}
	else 
	{
		printf("the grade is fail\n");
	}
	return 0;
}
