//counting vowels in a string 
#include<stdio.h>
int main(){
	char str[20];
	printf("Enter a string:");
	scanf("%s",str);
	int i=0,count=0;
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			count++;
		}
		i++;
	}
	printf("No of Vowels in the string: %d",count);
}