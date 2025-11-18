#include<stdio.h>
int sumNatural(int n){
	if(n==0)
	return 0;
	else
	return n+sumNatural(n-1); //recursive call
}
int main(){
	printf("%d",sumNatural(5)); //output: 15
	return 0;
}