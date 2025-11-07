#include<stdio.h>
int main(){
	int arr[5],i,j,temp;
	for(i=0; i<=4; i++){
		scanf("%d",&arr[i]);
	}
		for(i=0; i<=4; i++){
		for(j=0; j<5-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n");
	for(i=0; i<=4; i++){
		printf("%d ",arr[i]);
	}
}