#include<stdio.h>
int main()
{
	int numerator,denominator,division;
	printf("Division Safety Checker\n");
	printf("========================\n");
	printf("Enter numerator:\t");
	scanf("%d",&numerator);
	printf("Enter denominator:\t");
	scanf("%d",&denominator);
	if(denominator==0){
		printf("Error!");
	}
	else{
		division=numerator/denominator;
		printf("Division of both numbers is: %d",division);
	}
}