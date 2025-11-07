#include<stdio.h>
int cube(int x){
	return x*x*x;
}
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Cube of %d is %d",num,cube(num));
	return 0;
}