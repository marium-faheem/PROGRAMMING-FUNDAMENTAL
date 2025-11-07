#include<stdio.h>
int main(){
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	//printing the given array
    for(int i=0; i<n; i++){
    	printf("%d ",arr[i]);
	}
	printf("\n");
	//printing elements in reverse of given array
	int i=0;
	int j=n-1;
    while(i<j){
    	int temporary= arr[i];
    	arr[i]=arr[j];
    	arr[j]=temporary;
    	i++;
    	j--;
	}
	 for(int i=0; i<n; i++){
    	printf("%d ",arr[i]);
	}
}