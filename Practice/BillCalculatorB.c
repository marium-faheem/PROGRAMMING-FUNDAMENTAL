/* Construct a code in C language to calculte the telephone bill on the following tariff:
for the first 50 mins -> Rs 1.00 per min
for the next 100 mins -> Rs 0.80 per min
for the next 100 mins -> Rs 0.50 per min
for any min above 250 -> Rs 0.30 per min
finally add service tax of 12% in the bill*/
#include<stdio.h>
int main()
{
	float mins,bill=0,totalbill,tax;
	printf("Enter minutes consumed:");
	scanf("%f",&mins);
	if(mins<=50){
		bill=mins*1.00;
	}
	else if(mins<=150){
		bill=(50*1.00)+((mins-50)*0.80);
	}
	else if(mins<=250){
		bill=(50*1.00)+(100*0.80)+((mins-150)*0.50);
	}
	else{
		bill=(50*1.00)+(100*0.80)+(100*0.50)+((mins-250)*0.30);
	}
	tax=0.12*bill;
	totalbill=bill+tax;
	printf("Telephone bill breakdown:-\n");
	printf("Bill excluding tax=%.2f\n",bill);
	printf("Tax to be added=%.2f\n",tax);
	printf("Bill including tax=%.2f\n",totalbill);
}
