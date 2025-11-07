#include<stdio.h>
int main(){
	int arr[]={58,98,65,89,99,72,100};
	int n=sizeof(arr)/4;
	int max=arr[0];
	for(int i=1; i<=n; i++)
	{
		if(max<arr[i]) max=arr[i];
	}
	printf("Max number is %d",max);
}