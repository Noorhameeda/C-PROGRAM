#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void calculate_the_maximum(int n, int k)
{
	int m1=0,m2=0,m3=0;
	for(int x=1; x<n; x++){
		for(int y=2; y<=n; y++){
			int a=x&y;
			if((a>m1)&&(a<k)){
				m1=a;
		}
				int b=x|y;
			if((b>m2)&&(b<k)){
				m2=b;
		}
			int c=x^y;
			if((c>m3)&&(c<k)){
				m3=c;
			}
	}
}
  printf("%d\n",m1);  
    printf("%d\n",m2); 
      printf("%d\n",m3); 
  }
  int main(){
  	int n,k;
  	scanf("%d %d",&n,&k);
  	calculate_the_maximum(n,k);
  	return 0;
  }
