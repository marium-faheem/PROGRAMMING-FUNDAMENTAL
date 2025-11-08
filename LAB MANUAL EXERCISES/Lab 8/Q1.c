#include<stdio.h>
#include<string.h>
int main(){
	char firstname[20];
	char lastname[20];
	printf("Enter first name:");
	scanf("%s", firstname);
	printf("Enter last name:");
	scanf("%s", lastname);
	strcat(firstname,lastname);
	printf("Full name: %s",firstname);
	printf("\n");
	int size=0;
	int k=0;
	while(firstname[k]!='\0'){
		size++;
		k++;
	}
	for(int i=0,j=size-1; i<=j; i++,j--){
		char temp = firstname[i];
		firstname[i] = firstname[j];
		firstname[j] = temp;
	}
	printf("Reverse is: %s",firstname);
}