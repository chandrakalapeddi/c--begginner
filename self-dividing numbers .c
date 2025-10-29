#include<stdio.h>
int main()
{
int a,b,i,n,t,r,s,c1,c2;
scanf("%d%d",&a,&b);
i=a;
while(i<=b)
{
n=i;
t=i;
c1=0;
c2=0;
while(n!=0)
{
r=n%10;
n=n/10;
c1++;
if(r!=0)
{
s=t%r;
if(s==0)
{c2++;}
}
}
if(r!=0)
{
if(c1==c2)
{printf("%d",t);}
}
i++;
}
return 0;
}
