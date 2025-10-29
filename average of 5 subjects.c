#include<stdio.h>
int main()
{
	int eng,mat,ppsc,dld,bi,sum;
	float average;
	printf("enter eng marks");
	scanf("%d",&eng);
	printf("enter mat marks");
	scanf("%d",&mat);
	printf("enter ppsc marks");
	scanf("%d",&ppsc);
	printf("enter dld marks");
	scanf("%d",&dld);
	printf("enter bi marks");
	scanf("%d",&bi);
	sum=eng+mat+ppsc+dld+bi;
	average=sum/5;
	printf("the average of 5 subjects is %f:", average);
	return 0;
}
