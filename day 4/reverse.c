#include<stdio.h>

void main(){
    int n, i, a[100];
    //a[100] creates an array of 100 elements.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<(n-1)/2; i++){
        int temp=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=temp;
    }
    printf("The array now is: ");
    for(int i=0; i<n; i++){
        printf("%d, ", a[i]);
    }
    
}