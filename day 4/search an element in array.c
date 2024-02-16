#include<stdio.h>

void main(){
    int n, i, a[100],num;
    //a[100] creates an array of 100 elements.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number");
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        if (num==a[i])
        {
            break;
        }
          
    }
}