#include<stdio.h>
void swap(intx,inty)
{
	int temp,x=3,y=7;
	temp=x;
	x=y;
	y=temp;
	printf("\nafter swapping 1st number is%d and 2nd number is %d",x,y);
}
int main()
{
	int a=10,b=20;
	printf("\nbefore swapping 1st number is%d and 2nd number is %d",a,b);
	swap(a,b);
	printf("\nafter swapping 1st number is%d and 2nd number is %d",b,a);
	return 0;
}

