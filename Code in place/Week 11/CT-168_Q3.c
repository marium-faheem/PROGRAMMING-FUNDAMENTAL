#include<stdio.h>
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x=10,y=20;
	printf("Values before swapping; x=%d, y=%d\n",x,y);
	swap(&x,&y);
	printf("Values after swapping; x=%d, y=%d",x,y);
}