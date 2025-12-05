#include<stdio.h>
void minMax(int arr[], int len, int *min, int *max){
	*min = *max = arr[0];
	for(int i=0; i<len; i++){
		if(arr[i]>*max) *max = arr[i];
		else if(arr[i]<*min) *min = arr[i];
	}
}
int main(){
	int arr[]={22,11,32,10,90};
	int min,max;
	int len = sizeof(arr)/sizeof(arr[0]);
	minMax(arr,len,&min,&max);
	printf("Max is %d & Min is %d",max,min);
}
