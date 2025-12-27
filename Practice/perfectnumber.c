//#include<stdio.h>
//int perfect(int n){
//	int i,sum=0;
	//for(i=1;i<=n/2;i++){
	//	if(n%i==0){
		//	printf("%d ",i);
			//sum+=i;
		//}
	//}
	//return (sum==n);
//}
//int main(){
//	printf("All perfect numbers between 1-1000:-\n");
	//for(int i=1; i<=1000; i++){
	//	if(perfect(i)){
		//	printf("%d\n",i);
		//}
	//}
//}
#include <stdio.h>

int perfect(int n){
    int i, sum = 0;

    for(i = 1; i <= n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    return (sum == n);
}

int main() {
    int i;

    printf("Perfect numbers between 1 and 1000:\n");
    for(i = 1; i <= 1000; i++){
        if(perfect(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}
