#include <stdio.h>
#include <stdlib.h>

int main() {
int num, *arr, i,s=0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    s=0;
    for(i=0;i<num;i++)
    {
        s=s+*(arr+i);
    }
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
