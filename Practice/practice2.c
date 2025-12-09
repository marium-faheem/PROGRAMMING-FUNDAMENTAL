#include<stdio.h>
int main(){
	char str1[20];
	char str2[20];
	printf("Enter first string:");
	scanf("%[^\n]",str1);
	getchar();
	printf("Enter second string:");
	scanf("%[^\n]",str2);
	int equal = 1;
	int i = 0;
	while(str1[i]!='\0' || str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			equal = 0;
			break;
		}
		i++;
	}
	if(equal) printf("Strings are equal.");
	else printf("Strings are not equal.");
}