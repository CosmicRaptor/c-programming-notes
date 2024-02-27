#include<stdio.h>

void main(){
    int i, j, k, l, num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        for(j=0; j<num-i; j++) {
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("%d", k);
        }
        for(l=i-1; l>=1; l--){
            printf("%d", l);
        }
        printf("\n");
    }
}