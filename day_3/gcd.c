#include<stdio.h>

void main(){
    int n1=0, n2=0, i, gcd;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);
    if(n1>n2) gcd=n2;
    else gcd=n1;
    while (n1%gcd !=0 || n2%gcd !=0) gcd--;
    if(gcd==1) printf("No GCD found");
    else printf("GCD is %d", gcd);
}