#include<stdio.h>
int main()
{
	float height,base,area;
	printf("enter height value");
	scanf("%f",&height);
	printf("enter base value");
	scanf("%f",&base);
	area= 0.5*base*height;
	printf("area is %f",area);
	return 0;
}
