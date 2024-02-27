// if-else, for, while, do while, switch

// program to check if number is even or odd

#include<stdio.h>

void main(){
    int a;
    printf("Enter number:");
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("Number is even");
    }
    else {
        printf("Numeber is odd");
    }
}