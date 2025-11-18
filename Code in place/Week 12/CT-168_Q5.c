#include<stdio.h>
void bubbleSort(int *arr, int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(*(arr+j)<*(arr+j+1)){
				int temp = *(arr+j+1);
				*(arr+j+1) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
}
int main(){
	int data[]={64,34,25,12,22,11,90};
	int n=sizeof(data)/sizeof(data[0]);
	bubbleSort(data, n);
	for(int i=0; i<n; i++){
	printf("%d ",data[i]);
}
}