#include<stdio.h>
#include<string.h>
int main(){
	//string copy function (strcpy)
	char src[]="Hello";
	char dest[10];
	strcpy(dest, src);
	printf("dest = %s\n",dest);
	return 0;
}