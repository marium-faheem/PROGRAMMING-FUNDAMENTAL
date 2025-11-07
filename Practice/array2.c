#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n= sizeof(arr)/4;
	int product=1;
	//calculating product of the elements in array
	for(int i=0; i<n; i++)
	{
		product*=arr[i];
	}
	printf("%d",product);
}