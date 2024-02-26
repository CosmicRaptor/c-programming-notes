#include<stdio.h>

void main(){
    int i, j, choice, n1, n2, gcd, lcm;
    printf("Enter the two numbers: ");
    scanf("%d%d", &n1, &n2);
    printf("1. Find GCD\n2. Find LCM");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if(n1>n2) gcd=n2;
        else gcd=n1;
        while (n1%gcd !=0 || n2%gcd !=0) gcd--;
        if(gcd==1) printf("No GCD found");
        else printf("GCD is %d", gcd);
        break;

    case 2: 
        if(n1>n2) lcm=n2;
        else lcm=n1;
        while (lcm%n1 !=0 || lcm%n2 !=0) lcm++;
        if(lcm==1) printf("No LCM found");
        else printf("LCM is %d", lcm);
    
    default:
        break;
    }
}