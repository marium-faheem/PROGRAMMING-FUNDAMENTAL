#include<stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr){
	int temp;
	
	temp = *bPtr;
	*bPtr = *aPtr;
	*aPtr = *cPtr;
	*cPtr = temp;
}
int main(){
	int a,b,c;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	
	printf("Enter c:");
	scanf("%d",&c);
	
	printf("\nBefore swap: a=%d, b=%d, c=%d\n",a,b,c);
	swaped(&a,&b,&c);
	printf("\nAfter swap: a=%d, b=%d, c=%d\n",a,b,c);
}