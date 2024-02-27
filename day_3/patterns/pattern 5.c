#include<stdio.h>


//pattern:
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
void main(){
    int i,j,k,l, n;
    printf("enter no of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        for(l=2;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=n; i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=n-i;k++){
            printf("*");
        }
        for(l=2;l<=n-i;l++){
            printf("*");
        }
        printf("\n");
    }
}