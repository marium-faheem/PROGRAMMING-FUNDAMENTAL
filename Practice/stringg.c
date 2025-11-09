#include<stdio.h>
#include<string.h>
int main(){
	char fname[20];
	char lname[20];
	printf("Enter first name:");
	gets(fname);
	printf("Enter last name:");
	gets(lname);
	strcat(fname,lname);
	int size=0,k=0;
	while(fname[k]!='\0'){
		size++;
		k++;
	}
	for(int i=0,j=size-1; i<=j; i++,j--){
		int temp = fname[i];
		fname[i] = fname[j];
		fname[j] = temp;
	}
	printf("Reverse: %s",fname);
}