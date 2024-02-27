#include<stdio.h>

void main(){
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    comeBackHere:
    printf("1: Addition\n2: Substraction\n3: Multiplication\n4: Division\n5: Modulus: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: printf("%d", num1+num2); break;
    case 2: printf("%d", num1-num2); break;
    case 3: printf("%d", num1*num2); break;
    case 4: printf("%d", num1/num2); break;
    case 5: printf("%d", num1%num2); break;
    default: goto comeBackHere;
    }
}