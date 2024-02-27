#include<stdio.h>

void main(){
    int i, num, fact;
    printf("Enter the number: ");
    scanf("%d", &num);
    fact = num;
    for(i=num-1; i>0; i--){
        fact = fact * i;
    }
    printf("The factorial is %d", fact);
}