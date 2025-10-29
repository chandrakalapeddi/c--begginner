#include<stdio.h>
int main()
{
	int units;
	float amount, charge, total_amount;
	printf("enter total units consumed: ");
	scanf("%d", &units);
	//calculating electricity bill
	if(units<=50)
	{
		amount = units*2.50;
		charge = 30;
	}
	else if(units <=100)
	{
		amount = units*3.00;
		charge = 50;
	}
	else if(units <=150)
	{
		amount = units*4.00;
		charge = 70;
	}
		else if(units <=200)
	{
		amount = units*5.00;
		charge = 80;
	}
		else if(units <=250)
	{
		amount = units*6.00;
		charge = 90;
	}
		else if(units <=300)
	{
		amount = units*7.00;
		charge = 100;
	}
	else
	{
		amount = units*8.00;
		charge = 125;
	}
	total_amount = amount + charge;
	printf("electricity bill: %.2f", total_amount);
	return 0;
}
