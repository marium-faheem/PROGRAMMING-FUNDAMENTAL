//rotate a matrix to 90 degree
#include<stdio.h>
int main(){
	int n;
	printf("Enter rows & columns:");
	scanf("%d",&n);
	printf("Enter elements of the matrix:\n");
	int arr[n][n];
	//input elements
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//transpose in place
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	//now reverse each row
	for(int i=0; i<n; i++){
		int j=0;
		int k=n-1;
		while(j<k){
			int temp = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = temp;
			j++;
			k--;
		}
	}
	printf("\n");
	//now print
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}