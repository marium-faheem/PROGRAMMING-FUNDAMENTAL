//matrix multiplication
#include<stdio.h>
int main(){
	int r1,c1,r2,c2;
	printf("Enter Rows & Columns of matrix A: ");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter Rows & Columns of matrix B: ");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2){
		printf("Matrix Multiplication is not possible\n");
		printf("Rule of Multiplacation: Columns of A must be equal to Rows of B.");
	}
	else{
		int A[r1][c1],B[r2][c2];
		printf("Enter elements of A(%dx%d):\n",r1,c1);
		for(int i=0; i<r1; i++){
			for(int j=0; j<c1; j++){
				scanf("%d",&A[i][j]);
			}
		}
		printf("Enter elements of B(%dx%d):\n",r2,c2);
		for(int i=0; i<r2; i++){
			for(int j=0; j<c2; j++){
				scanf("%d",&B[i][j]);
			}
		}
		int C[r1][c2];
		for(int i=0; i<r1; i++){
			for(int j=0; j<c2; j++){
				C[i][j]=0;
				for(int k=0; k<c1; k++){
					C[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
	//display resultant matrix
	printf("\nResultant Matrix (AxB):\n");
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	}
}