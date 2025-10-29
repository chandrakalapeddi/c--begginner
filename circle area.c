#include<stdio.h>
float const pi=3.14;
int main()
{
	float r, area;
	printf("enter radius:");
	scanf("%f", &r);
	area=pi*(r*r);
	printf("area:%f", area);
	return 0;
}
