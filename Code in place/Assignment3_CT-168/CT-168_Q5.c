#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter temperature in Celsius:");
	scanf("%f",&celsius);
	fahrenheit=celsius*9/5+32;
	printf("%fC\t=\t%fF\n",celsius,fahrenheit);
	if(celsius>=30){
		printf("It's hot! Stay hydrated and wear light clothes.");
	}
	else if(celsius>=20 && celsius <= 29){
		printf("Nice weather! Perfect for outdoor activities.");
	}
	else if(celsius>=10 && celsius <= 19){
		printf("Cool weather, Wear a light jacket.");
	}
	else if(celsius>=0 && celsius <= 9){
		printf("Cold! Wear warm clothes.");
	}
	else{
		printf("Freezing! Stay indoors and bundle up.");
	}
}