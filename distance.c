#include<stdio.h>
int main()
{
	int speed,time,distance;
	printf("enter speed(kmph),time(min) values");
	scanf("%d%d",&speed,&time);
	distance=speed*time/60;
	printf("\ndistance travelled is %d km",distance);
	return 0;
}
