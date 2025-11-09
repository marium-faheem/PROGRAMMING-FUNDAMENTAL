//recursive functions
#include<stdio.h>

int factorial(int n){
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
}

int main(){
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("%d!=%d\n",x,factorial(x)); //120
	return 0;
}