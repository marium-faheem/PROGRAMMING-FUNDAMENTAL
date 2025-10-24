#include<stdio.h>
int main(void)
{
	float celsius,fahrenheit;
	printf("TEMPERATURE CONVERTER\n");
	printf("===========================\n");
	printf("Enter Temperature in Celsius:");
	scanf("%f",&celsius);
	fahrenheit=celsius*9/5+32;
	printf("The temperature in Fahrenheit will be:%f",fahrenheit);
}