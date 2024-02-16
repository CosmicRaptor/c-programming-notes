#include<stdio.h>

void main(){
    int n, i, a[100];
    float avg=0,sum=0;
    //a[100] creates an array of 100 elements.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Average of array elements is %f",avg);

}