#include<stdio.h>

void main(){
    int i, n, fact;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=1, fact=1; i<=n; i++){
        fact = fact * i;
    }
    printf("\nfactorial is %d", fact);
}