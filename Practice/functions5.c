#include<stdio.h>
//functions by sir raghav
int sqrt(int a){
	return a*a;
}
int main(){
int num;
printf("Enter any number:");
scanf("%d",&num);
printf("Square of the number is:%d",sqrt(num));
return 0;
}