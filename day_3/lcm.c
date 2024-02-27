#include<stdio.h>

void main(){
    int n1=0, n2=0, i, lcm;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);
    if(n1>n2) lcm=n2;
    else lcm=n1;
    while (lcm%n1 !=0 || lcm%n2 !=0) lcm++;
    if(lcm==1) printf("No LCM found");
    else printf("LCM is %d", lcm);
}