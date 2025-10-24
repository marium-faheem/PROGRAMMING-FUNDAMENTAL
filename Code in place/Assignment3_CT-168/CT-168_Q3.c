#include<stdio.h>
int main()
{
	int num;
	printf("Even/Odd Number Checker\n");
	printf("========================\n");
	printf("Enter any number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("The number is an even number");
	}
	else{
		printf("It is an odd number");
		
	}
	
}