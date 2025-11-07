/*Construct a code in C language to input electricity unit charges according to the following teriff
for first 25 units -> Rs 0.50 per unit
for next 50 units -> Rs 0.75 per unit
for next 100 units -> Rs 1.20 per unit
for units above 250 -> Rs 1.50 per unit
finally add additional surcharge of 15% to the bill*/
#include<stdio.h>
int main()
{
	float units,bill=0,totalbill,surcharge;
	printf("Enter units consumed=");
	scanf("%f",&units);
	if(units<=25){
		bill=units*0.50;
	}
	else if(units<=75){
		bill=25*0.50+((units-25)*0.75);
	}
	else if(units<=175){
		bill=(25*0.50)+(50*0.75)+((units-75)*1.20);
	}
	else{
		bill=(25*0.50)+(50*0.75)+(100*1.20)+((units-175)*1.50);
	}
	surcharge=0.15*bill;
	totalbill=bill+surcharge;
	printf("Electricity bill :-\n");
	printf("Bill excluding surcharge=%.2f\n",bill);
	printf("Surcharge to be added=%.2f\n",surcharge);
	printf("Total bill with surcharge=%.2f",totalbill);
}