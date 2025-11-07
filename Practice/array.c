#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n= sizeof(arr)/4;
	int sum=0;
	//calculating sum of the elements in array
	for(int i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	printf("%d",sum);
}