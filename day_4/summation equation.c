#include<stdio.h>

void main(){
    int n, i, a[100],sum1=0,sum2=0;
    //a[100] creates an array of 100 elements.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        sum1=sum1+((a[i])*(a[i]));
    }
    for(int i=0; i<n; i++){
        sum2=sum2+(a[i]);
    }
    int ans=sum1-(sum2*sum2);
    printf("The array ans is: %d",ans);
}