#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	int result=strcmp(str1,str2);
	if(result==0) printf("Strings are equal.");
	else if(result>0) printf("First string is greater.");
	else printf("Second string is greater.");
	return 0;
}