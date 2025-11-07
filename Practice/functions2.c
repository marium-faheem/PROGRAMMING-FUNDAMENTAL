#include<stdio.h>
//Program to find odd even using function
void oddEven(int x){
	if(x%2==0) printf("%d is even",x);
	else printf("%d is odd",x);
}
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	oddEven(a);
	return 0;
}