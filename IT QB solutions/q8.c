#include<stdio.h>

void main(){
    int a[100], b[100], c[100], i, n, sum1=0, sum2=0, sum3=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &c[i]);
    }
    for(i=0; i<n; i++){
        sum1 = sum1 + a[i]*a[i]*b[i];
        sum2 = sum2 + a[i]*b[i]*b[i];
        sum3 = sum3 + a[i]*b[i]*c[i];
    }
    int sum = sum1 + sum2 + sum3;
    printf("The summation is %d", sum);

}