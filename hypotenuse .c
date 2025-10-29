#include<stdio.h>
int main()
{
int x,y;
double z;
scanf("%d %d",&x,&y);
z=sqrt((x*x)+(y*y));
printf("%.21f",z);
return 0;
}
