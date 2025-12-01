#include<Stdio.h>
int main(){
	int m,n,T=0;
	printf("Enter rows:");
	scanf("%d",&m);
	printf("Enter columns:");
	scanf("%d",&n);
	int arr[m][n];
	printf("Enter elements:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]==0) T++;
		}
	}
	if(T>=(m*n)/2) printf("It is a sparse matrix.");
	else printf("It isn't a sparse matrix.");
}