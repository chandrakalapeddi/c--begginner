#include<stdio.h>
int main()
{
int num;
float f;
char ch;
char str[50];
printf("enter an integer: ");
scanf("%d", &num);
printf("enter a float: ");
scanf("%f", &f);
printf("enter a character: ");
scanf("%c", &ch);
printf("enter a string: ");
scanf("%s", str);

printf("\n you entered:\n");
printf("integer:%d\n", num);
printf("float:%.2f\n", f);
printf("character:%c\n", ch);
printf("string:%s\n", str);

return 0;
}
