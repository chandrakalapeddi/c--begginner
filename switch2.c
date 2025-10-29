#include<stdio.h>
int main()
{
	int a,b;
     char choice;
     printf("enter the operator (+,-,*,/)\n");
     scanf("%c",&choice);
     
      printf("enter the two numbers:");
     scanf("%d%d",&a,&b);
     switch(choice)
     
    {
    	case'+':
    		printf("%d + %d =%d\n",a,b,a+b);
    		break;
     	case'-':
    		printf("%d - %d =%d\n",a,b,a-b);
    		break;
		case'*':
    		printf("%d * %d =%d\n",a,b,a*b);
    		break;
		case'/':
    		printf("%d / %d =%d\n",a,b,a/b);
			default:
				printf("enter valid number");
    }
      return 0;
}
