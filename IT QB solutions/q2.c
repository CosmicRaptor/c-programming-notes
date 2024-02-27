#include<stdio.h>

void main(){
    int n, i, choice;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("1. Check if even/odd\n2. Check if perfect square\n3. Check if prime: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if(n % 2 ==0) printf("Number is even");
        else printf("Number is odd");
        break;
    
    case 2:
        for(i=0; i<n; i++){
            if(i * i == n) {
                printf("Number is a perfect square. The square root is %d", i);
                break;
            }
        }
        if(i == n) printf("Number is not a perfect square.");
        break;
    
    case 3: 
        for(i=2; i<n; i++){
            if (n % i == 0){
                printf("Number is not prime");
                break;
            }
        }
        if (n == i) printf("Number is prime");
        break;
    default:
        printf("Invalid choice.");
        break;
    }
}