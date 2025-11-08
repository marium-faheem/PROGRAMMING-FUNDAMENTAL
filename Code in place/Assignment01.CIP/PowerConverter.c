#include<stdio.h>
void main (void)
{
float watts;
float kilowatts;
printf("Enter power in watts=");
scanf("%f",&watts);
kilowatts=watts/1000;
printf("The power in kilowatts is= %f",kilowatts);	
}