#include <stdio.h>
int main(){
    int m,n,i,j,T=0;
    printf("Enter rows:");
    scanf("%d",&m);
    printf("Enter columns:");
    scanf("%d",&n);
    int matrix[m][n];
    //input matrix
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==0) T++;
        }
    }
    if(T>=(m*n)/2) printf("It is a sparse matrix");
    else printf("It is not a sparse matrix");
    return 0;
}