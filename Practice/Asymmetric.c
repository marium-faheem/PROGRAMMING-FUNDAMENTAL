#include<Stdio.h>
int main(){
	int n,sym=1;
	printf("Enter rows/columns:");
	scanf("%d",&n);
	int A[n][n],T[n][n];
	printf("Enter elements:\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			T[j][i]=A[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(A[i][j]!=T[i][j]) {
				sym=0;
				break;
			}
		}
		if(!sym) break;
	}
	    // Output
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    if(sym) {
    	printf("\nMatrix is symmetric.\n");
	} else {
		printf("\nMatrix is asymmetric.");
	}
}

	