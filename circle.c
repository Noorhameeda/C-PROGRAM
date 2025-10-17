#include<stdio.h>
int main()
{
	float radius,area;
	printf("enter radius value");
	scanf("%f",&radius);
	area=3.142*radius*radius;
	printf("\narea of circle is %.4f",area);
	return 0;
}
