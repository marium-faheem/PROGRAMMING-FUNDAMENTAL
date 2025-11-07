#include<stdio.h>
int main()
{
    int arr[2];
    printf("Enter 1st value: ");
    scanf("%d",&arr[0]);
    printf("Enter 2nd value: ");
    scanf("%d",&arr[1]);
    if(arr[0]>arr[1]) printf("%d is greater",arr[0]);
    else printf("%d is greater",arr[1]);
}