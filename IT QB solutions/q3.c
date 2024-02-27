#include<stdio.h>

void main(){
    int i, num, digit, sum;
    printf("The 3 digit armstrong numbers are: \n");
    for(i=100; i<=999; i++){
        num = i;
        sum = 0;
        while(num!=0){
            digit = num % 10;
            sum = sum + digit*digit*digit;
            num = num / 10;
        }
        if (sum == i) printf("%d is armstrong\n", i);
    }
}