#include<stdio.h>

void main(){
    int n, i, a[100], choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for ( int j = 0; j < n-1; j++)
    {
        for(int i=0; i<n-1; i++)
        {
        if (a[i]>a[i+1])    //replace it with < for descending
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        }
    }
    printf("The array now is sorted in ascending order: ");
    for(int i=0; i<n; i++){
        printf("%d, ", a[i]);
    }
}