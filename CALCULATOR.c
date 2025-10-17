#include<stdio.h>
int main()
{
	float a,b,res;
	int ch;
	printf("enter any two numbers:");
	scanf("%f %f",&a,&b);
	printf("(1) ADDITION\n");
	printf("(2) SUBTRACTION\n");
	printf("(3) MULTIPLICATION\n");
	printf("(4) DIVISION\n");
	printf("(5) REMAINBER\n");
	printf("(0) EXIT\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1: res =a+b;
    	       printf("ADDITION:%.2f\n\n",res);
    	       break;
        case 2: res =a-b;
    	       printf("SUBTRACTION:%.2f\n\n",res);
    	       break;
    	case 3: res =a*b;
    	       printf(" MULTIPLICATION:%.2f\n\n",res);
    	       break;
    	case 4: res =a/b;
    	       printf("DIVISION:%.2f\n\n",res);
    	       break;
    	case 5: res =(int)a%(int)b;
    	       printf("REMAINBER:%d\n\n",res);
    	       break;
    	case 0:
    	       printf("CHOICE TERMINATED\n\n");
    	       break;
       default:
       	       printf("INVALIDE CHOICE\n\n");
       	       break;
	}
	return 0;
}
