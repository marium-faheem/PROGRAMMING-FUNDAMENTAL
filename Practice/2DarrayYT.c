#include<stdio.h>
int main()
{
	//simple matrix printing
	int A[4][2]={{76,80},{88,82},{82,91},{71,98}};
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}