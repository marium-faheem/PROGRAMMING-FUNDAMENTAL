#include<stdio.h>
#include<string.h>
int main(){
	//string and copy function (strncpy)
	char src[]="Hello";
	char dest[4];
	strncpy(dest, src, 3);
	dest[3]='\0';
	printf("dest = %s\n",dest);
	return 0;
}