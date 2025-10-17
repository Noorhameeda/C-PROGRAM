#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n,i;
    
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
       
        printf("Memory allocation failed\n");
        return 1;
    }

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

  
    printf("%d\n", sum);

  
    free(arr);


     
    return 0;
}
