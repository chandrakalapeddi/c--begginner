#include<stdio.h>
int main()
{
int s;
double d,h,g;
scanf("%d",&s);
if (s<=10000)
{
 d=s*0.8;
 h=s*0,2;
}
else if (s<=20000)
{
  d=s*0.9;
  h=s*0.25;
}
else
{
  d=s*0.95;
  h=s*o.3;
}
g=s+d+h;
printf("%.2f",g);
return 0;
}
