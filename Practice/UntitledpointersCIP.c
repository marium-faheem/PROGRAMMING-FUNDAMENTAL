#include<stdio.h>
int main(){
	int a=10;
	int *b=&a; //pointer declaration 
	int a=50;
	printf("%d",a);
	printf("%d",b);	
}