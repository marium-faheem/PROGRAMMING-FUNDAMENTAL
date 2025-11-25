#include<stdio.h>
int main(){
	int n;
	printf("Enter size of matrix (nxn):");
	scanf("%d",&n);
	int arr[n][n];
	//enter elements of matrix
	printf("Enter elements of matrix (nxn):\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int trans[n][n];
	//now finding transpose
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			trans[j][i]=arr[i][j];
		}
	}
	//checking if original = transpose
	int isSym=1; //suppose they are symmetric
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]!=trans[i][j]) {
				isSym=0;
				break;
			}
		}
	}
	if(isSym) printf("The matrix is Symmetric.");
	else printf("The matrix is aSymmetric.");
	
}