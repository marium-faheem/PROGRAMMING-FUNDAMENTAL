#include<stdio.h>
int main()
{
	int arr[]={34,65,54,98,22,100,7};
	int n=sizeof(arr)/4;
//	printf("%d",n);
	int min=arr[0];
	for(int i=1; i<n; i++)
	{
		if(min>arr[i]) min=arr[i];
	}
	printf("Minimum number is %d",min);
}