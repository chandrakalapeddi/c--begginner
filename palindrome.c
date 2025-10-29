	#include<stdio.h>
int main()
{
	int n,t,r,rev=0;
	printf("enter an integer\n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(t==rev)
	printf(" %d is palindrome number",t);
	else
	printf(" %d is not  palindrome number",t);
	return 0;
}
