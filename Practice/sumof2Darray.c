#include<stdio.h>
int main(){
	int r,c;
	printf("Enter rows of matrix:");
	scanf("%d",&r);
	printf("Enter columns of matrix:");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter elements of matrix\n");
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			sum=sum+arr[i][j];
		}
	}
	printf("Sum of all the elements in the matrix:%d",sum);
}