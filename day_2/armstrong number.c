#include<stdio.h>

void main(){
    int sum=0, digit, x, copy;
    printf("Enter number: ");
    scanf("%d", &x);
    copy=x;
    while (x!=0){
        digit=x%10;
        sum = sum+digit*digit*digit;
        x=x/10;
    }
    if (sum == copy){
        printf("Is armstrong");
    }
    else{
        printf("Not armstrong");
    }
}