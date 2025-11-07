#include<stdio.h>
//Program to check minimum of two numbers using function
int min(int x, int y){
if(x>y) return y;
else return x;	
}
int main(){
	int a,b;
	printf("Enter 1st value:");
	scanf("%d",&a);
	printf("Enter 2nd value:");
	scanf("%d",&b);
	int m = min(a,b);
	printf("Minimum of %d & %d is %d",a,b,m);
	return 0;
}