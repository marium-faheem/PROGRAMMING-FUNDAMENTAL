#include<stdio.h>
void sortFunction(int *arr, int *size, int order){
	int temp;
	
	for(int i=0; i< *size; i++){
		for(int j=i+1; j< *size; j++){
			//if ascending 
			if(order==1 && arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			//if descending 
			if(order==2 && arr[i]<arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}
}

int main(){
	int size,order;
	
	printf("Enter size of array:");
	scanf("%d",&size);
	int arr[50];
	
	printf("\nEnter elements of array:");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter order for sorting (1=ascending,2=descending):");
	scanf("%d",&order);
	
	sortFunction(arr,&size,order);
	
	printf("\nArray after sorting:\n");
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
}