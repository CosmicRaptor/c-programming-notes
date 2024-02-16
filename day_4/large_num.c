#include<stdio.h>

void main(){
    int n, i, a[100],large=0;
    //a[100] creates an array of 100 elements.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    large=a[0];
    for(int i=0; i<n; i++){
        if (large<a[i])
        {
            large=a[i];
        }
    }
    printf("The  Large number is %d",large);

}