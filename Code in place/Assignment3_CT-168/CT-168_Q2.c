#include<stdio.h>
int main (void)
{
	float temp;
	printf("Temperature Checker\n");
	printf("======================\n");
	printf("Enter Temperature:");
	scanf("%f",&temp);
	if(temp>30){
		printf("Weather is hot");
	}
}