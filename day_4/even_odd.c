#include<stdio.h>

void main(){
    int n, i, a[100],even=0,odd;
    //a[100] creates an array of 100 elements.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if (a[i]%2==0)
        {
            even++;
        }
    }
    printf("The number even number are %d",even);

}