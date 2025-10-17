#include<stdio.h>
int main()
{
	int unit;
	float amount;
	printf("enter the unit:");
	scanf("%d",&unit);
	if (unit <= 30)
	{
		amount = unit * 2.50;
	}
	else if (unit <= 70)
	{
		amount = 30 * 2.50 +((unit-30)*4.00);
	}
		else if (unit <= 150)
	{
		amount = 75 * 160 +((unit-70)*6.00);
	}
		else if (unit <= 250)
	{
		amount = 75 * 160 + 480 +((unit-150)*8.00);
	}
		else 
	{
		amount = 75 * 160 + 480 + 800 +((unit-250)*10.00);
	}
	printf("electricity bill = Rs. %.2f",amount);
	return 0;
}
