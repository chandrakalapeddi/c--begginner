#include <stdio.h>
int main()
{
	int short a;
	float b;
	double long c;
	char  d;
	printf("size of int short =%1u bytes\n",sizeof(a));
	printf("size of float=%1u bytes\n",sizeof(b));
	printf("size of double long=%1u bytes\n",sizeof(c));
	printf("size of char=%1u bytes\n",sizeof(d));
	return 0;
}
