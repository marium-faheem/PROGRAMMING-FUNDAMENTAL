#include<stdio.h>
int main()
{
	/*Given an array of integers, change the value of all odd indexed elements to its
	second multiple and increment all even indexed values to 10*/
	int arr[]={1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2!=0) arr[i]*=2;
		else arr[i]+=10;
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
    }
}
