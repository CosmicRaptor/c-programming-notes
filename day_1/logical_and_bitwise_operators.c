//logical operators
// && => logical AND operator => both true then true
// || => logical OR operator => one true then true

//bitwise operators
//a & b     AND operator
//a | b     OR operator
//a ^ b     XOR operator        =>both 1 then 0, either 1 then 1

// a << 1  shifts left by 1
// a << 2  shifts left by 2
//example: a = 0110
//after shifting by 1: a = 01100
//after shifting again by 1: a = 01100
//similarly a >> 1  shifts right by 1
//example shifting right by 1: a = 011

//Example: program to implement bitwise operators.

#include<stdio.h>

void main(){
    int a,b,result;
    printf("Enter the numbers");
    scanf("%d%d", &a, &b);
    int and_result = a & b;
    int or_result = a | b;
    int xor_result = a ^ b;
    int right_shift = a >> 1;
    int left_shift = a << 1;
    printf("The a & b operation is: %d \n", and_result);
    printf("The a | b operation is: %d \n", or_result);
    printf("The a ^ b operation is: %d \n", xor_result);
    printf("The a right shift: %d \n", right_shift);
    printf("The a left shift: %d \n", left_shift);

}