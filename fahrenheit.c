#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	 printf("\n celsius is %f",celsius);
	return 0;
}
