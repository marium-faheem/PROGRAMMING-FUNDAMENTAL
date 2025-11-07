//nested if
#include<stdio.h>
int main()
{
	int cp,sp;
	printf("Cost price? ");
	scanf("%d",&cp);
	printf("\nSelling price? ");
	scanf("%d",&sp);
	if(sp>cp){
		int profit=sp-cp;
		printf("made %d Rs profit",profit);
	}
	if(cp>sp){
		int loss=cp-sp;
		printf("incurred %d Rs loss",loss);
	}
	if(sp==cp){
		printf("no profit, no loss");
	}
	
}