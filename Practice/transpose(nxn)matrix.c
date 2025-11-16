//transpose of a nxn matrix(square matrix)
#include<stdio.h>
int main(){
	int n;
	printf("Enter no of rows/columns:");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter all the elements:\n");
	//input elements loop
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	//transpose in place
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){	
	    //swap arr[i][j] and arr[j][i]
	    int temp = arr[i][j];
	    arr[i][j] = arr[j][i];
	    arr[j][i] = temp;	
	    }
	}
	//printing the matrix 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
    printf("\n");
	}
}