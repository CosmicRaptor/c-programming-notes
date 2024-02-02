#include <stdio.h>

void main(){
    int num, res, i; 
    printf("Enter number: ");
    scanf("%d", &num);
    for(i=2; i<=num;i++){
        if (num % i == 0){
            break;
        }
    }
    if (num == i){
            printf("number is prime");
        }
        else {
            printf("not prime");
        }

}