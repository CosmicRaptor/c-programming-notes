#include <stdio.h>

void main(){
    int a=0, n;
    int sum = 0.0;
    printf("Enter the numbers: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        sum = sum +i;
    }
    printf("Value: %d", sum);
}